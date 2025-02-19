#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "LongTrip.h"
#include <QMessageBox>
#include <QDoubleValidator>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->fuelConsumptionEdit, &QLineEdit::textChanged, this, &MainWindow::checkInput);
    connect(ui->fuelCostEdit, &QLineEdit::textChanged, this, &MainWindow::checkInput);
    connect(ui->distanceEdit, &QLineEdit::textChanged, this, &MainWindow::checkInput);
    ui->resultLabel->setAlignment(Qt::AlignCenter);

    // Установка валидаторов для полей ввода
    QDoubleValidator *fuelConsumptionValidator = new QDoubleValidator(0.0, 1000.0, 3, this);
    fuelConsumptionValidator->setNotation(QDoubleValidator::StandardNotation);
    ui->fuelConsumptionEdit->setValidator(fuelConsumptionValidator);

    QDoubleValidator *fuelCostValidator = new QDoubleValidator(0.0, 1000.0, 3, this);
    fuelCostValidator->setNotation(QDoubleValidator::StandardNotation);
    ui->fuelCostEdit->setValidator(fuelCostValidator);

    QDoubleValidator *distanceValidator = new QDoubleValidator(0.0, 10000.0, 3, this);
    distanceValidator->setNotation(QDoubleValidator::StandardNotation);
    ui->distanceEdit->setValidator(distanceValidator);

    // Подключение сигналов
    connect(ui->calculateCostPerKmButton, &QPushButton::clicked, this, &MainWindow::calculateCostPerKilometer);
    connect(ui->calculateTotalTripButton, &QPushButton::clicked, this, &MainWindow::calculateTotalTripCost);
}

MainWindow::~MainWindow()
{
    delete ui;
}

// Метод для проверки ввода
void MainWindow::checkInput()
{
    QList<QLineEdit*> inputs = {ui->fuelConsumptionEdit, ui->fuelCostEdit, ui->distanceEdit};
    for (QLineEdit* input : inputs) {
        QString text = input->text();
        if (text.startsWith('0')  && text.length() > 1) {
            QMessageBox::warning(this, "Ошибка", "Числа не могут начинаться с 0\nЧисло заменено на ваше второе число");
            text = text.mid(1);
            input->setText(text);
        }
    }
}

// Метод для замены запятой на точку в строке
double MainWindow::convertToDouble(const QString& text, bool* ok) {
    QString modifiedText = text;
    modifiedText.replace(',', '.');
    return modifiedText.toDouble(ok);
}

// Слот для расчета стоимости одного километра пути
void MainWindow::calculateCostPerKilometer() {
    checkInput(); // Проверка ввода

    bool fuelConsumptionOk, fuelCostOk;

    double fuelConsumption = convertToDouble(ui->fuelConsumptionEdit->text(), &fuelConsumptionOk);
    if (!fuelConsumptionOk || fuelConsumption <= 0) {
        QMessageBox::warning(this, "Некорректные данные",
                             "Пожалуйста, введите положительное число для расхода топлива (Поле 1).");
        return;
    }

    double fuelCost = convertToDouble(ui->fuelCostEdit->text(), &fuelCostOk);
    if (!fuelCostOk || fuelCost <= 0) {
        QMessageBox::warning(this, "Некорректные данные",
                             "Пожалуйста, введите положительное число для стоимости топлива (Поле 2).");
        return;
    }

    LongTrip trip(fuelConsumption, fuelCost, 1); // Используем 1 км для расчета
    double cost = trip.costPerKilometer();

    QFont font = ui->resultLabel->font();
    font.setPointSize(15);
    font.setBold(true);
    ui->resultLabel->setFont(font);

    ui->resultLabel->setText(QString("Стоимость одного километра: %1 руб.").arg(cost));
}

// Слот для расчета общей стоимости поездки
void MainWindow::calculateTotalTripCost() {
    checkInput(); // Проверка ввода

    bool fuelConsumptionOk, fuelCostOk;

    double fuelConsumption = convertToDouble(ui->fuelConsumptionEdit->text(), &fuelConsumptionOk);
    if (!fuelConsumptionOk || fuelConsumption <= 0) {
        QMessageBox::warning(this, "Некорректные данные",
                             "Пожалуйста, введите положительное число для расхода топлива (Поле 1).");
        return;
    }

    double fuelCost = convertToDouble(ui->fuelCostEdit->text(), &fuelCostOk);
    if (!fuelCostOk || fuelCost <= 0) {
        QMessageBox::warning(this, "Некорректные данные",
                             "Пожалуйста, введите положительное число для стоимости топлива (Поле 2).");
        return;
    }

    bool distanceOk;
    double distance = convertToDouble(ui->distanceEdit->text(), &distanceOk);
    if (!distanceOk || distance <= 0) {
        QMessageBox::warning(this, "Некорректные данные",
                             "Пожалуйста, введите положительное число для расстояния (Поле 3).");
        return;
    }

    LongTrip longTrip(fuelConsumption, fuelCost, distance);
    double totalCost = longTrip.totalTripCost();

    QFont font = ui->resultLabel->font();
    font.setPointSize(15);
    font.setBold(true);
    ui->resultLabel->setFont(font);

    ui->resultLabel->setText(QString("Общая стоимость поездки: %1 руб.").arg(totalCost));
}
