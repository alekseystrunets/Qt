#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow {
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void calculateCostPerKilometer();
    void calculateTotalTripCost();
    void checkInput();

private:
    Ui::MainWindow *ui;

    // Объявление метода для конвертации строк в числа с плавающей точкой
    double convertToDouble(const QString& text, bool* ok);
};

#endif // MAINWINDOW_H
