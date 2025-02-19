/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLineEdit *fuelCostEdit;
    QPushButton *calculateCostPerKmButton;
    QPushButton *calculateTotalTripButton;
    QLineEdit *distanceEdit;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QWidget *widget;
    QLineEdit *fuelConsumptionEdit;
    QLabel *label;
    QLabel *resultLabel;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(660, 660);
        MainWindow->setMinimumSize(QSize(660, 660));
        MainWindow->setMaximumSize(QSize(660, 660));
        MainWindow->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        fuelCostEdit = new QLineEdit(centralwidget);
        fuelCostEdit->setObjectName("fuelCostEdit");
        fuelCostEdit->setGeometry(QRect(80, 220, 531, 41));
        fuelCostEdit->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color: #f7f7f7;\n"
"border: 1px solid #dcdcdc;\n"
"border-radius:5px;\n"
"padding: 6px;\n"
"font-size:12pt;\n"
"border-radius: 10px"));
        calculateCostPerKmButton = new QPushButton(centralwidget);
        calculateCostPerKmButton->setObjectName("calculateCostPerKmButton");
        calculateCostPerKmButton->setGeometry(QRect(340, 410, 281, 51));
        calculateCostPerKmButton->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"font-size:12px;\n"
"padding:10px;\n"
"background-color: #f4a259;\n"
"border-radius: 10px\n"
"\n"
"\n"
""));
        calculateTotalTripButton = new QPushButton(centralwidget);
        calculateTotalTripButton->setObjectName("calculateTotalTripButton");
        calculateTotalTripButton->setGeometry(QRect(40, 410, 291, 51));
        calculateTotalTripButton->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"font-size:12px;\n"
"padding:10px;\n"
"background-color: #f4a259;\n"
"border-radius: 10px\n"
"\n"
"\n"
""));
        distanceEdit = new QLineEdit(centralwidget);
        distanceEdit->setObjectName("distanceEdit");
        distanceEdit->setGeometry(QRect(80, 320, 531, 41));
        distanceEdit->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color: #f7f7f7;\n"
"border: 1px solid #dcdcdc;\n"
"border-radius:5px;\n"
"padding: 6px;\n"
"font-size:12pt;\n"
"border-radius: 10px"));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(80, 280, 231, 21));
        label_3->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(80, 180, 221, 21));
        label_4->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(80, 80, 301, 21));
        label_5->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        widget = new QWidget(centralwidget);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(30, 10, 600, 600));
        widget->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"border-radius: 10px;"));
        fuelConsumptionEdit = new QLineEdit(widget);
        fuelConsumptionEdit->setObjectName("fuelConsumptionEdit");
        fuelConsumptionEdit->setGeometry(QRect(50, 110, 531, 41));
        fuelConsumptionEdit->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color: #f7f7f7;\n"
"border: 1px solid #dcdcdc;\n"
"border-radius:5px;\n"
"padding: 6px;\n"
"font-size:12pt;\n"
"border-radius: 10px"));
        label = new QLabel(widget);
        label->setObjectName("label");
        label->setGeometry(QRect(170, 10, 261, 51));
        QFont font;
        font.setFamilies({QString::fromUtf8("Arial")});
        font.setPointSize(11);
        font.setBold(false);
        font.setItalic(false);
        font.setUnderline(true);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"font: 11pt \"Arial\";\n"
"\n"
""));
        resultLabel = new QLabel(widget);
        resultLabel->setObjectName("resultLabel");
        resultLabel->setGeometry(QRect(10, 500, 581, 81));
        resultLabel->setStyleSheet(QString::fromUtf8("background-color: rgb(172, 175, 108);\n"
"color:#ffffff;\n"
"font-size: 12pt;\n"
"padding:10px;\n"
"text-align: center;\n"
"border-radius: 35px\n"
"\n"
""));
        MainWindow->setCentralWidget(centralwidget);
        widget->raise();
        fuelCostEdit->raise();
        calculateCostPerKmButton->raise();
        calculateTotalTripButton->raise();
        distanceEdit->raise();
        label_3->raise();
        label_4->raise();
        label_5->raise();
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 660, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "\320\222\320\260\321\210\320\260 \320\277\320\276\320\265\320\267\320\264\320\272\320\260", nullptr));
        calculateCostPerKmButton->setText(QCoreApplication::translate("MainWindow", "\320\240\320\260\321\201\321\201\321\207\320\270\321\202\320\260\321\202\321\214 \321\201\321\202\320\276\320\270\320\274\320\276\321\201\321\202\321\214 \320\276\320\264\320\275\320\276\320\263\320\276 \320\272\320\270\320\273\320\276\320\274\320\265\321\202\321\200\320\260 \320\277\321\203\321\202\320\270", nullptr));
        calculateTotalTripButton->setText(QCoreApplication::translate("MainWindow", "\320\240\320\260\321\201\321\201\321\207\320\270\321\202\320\260\321\202\321\214 \321\201\321\202\320\276\320\270\320\274\320\276\321\201\321\202\321\214 \320\277\320\276\320\265\320\267\320\264\320\272\320\270", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:12pt;\">\320\232\320\276\320\273\320\270\321\207\320\265\321\201\321\202\320\262\320\276 \320\272\320\270\320\273\320\276\320\274\320\265\321\202\321\200\320\276\320\262 \320\277\321\203\321\202\320\270 :</span></p></body></html>", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:12pt;\">\320\241\321\202\320\276\320\270\320\274\320\276\321\201\321\202\321\214 \321\202\320\276\320\277\320\273\320\270\320\262\320\260 (\321\200\321\203\320\261/\320\273) :</span></p></body></html>", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:12pt;\">\320\240\320\260\321\201\321\205\320\276\320\264 \321\202\320\276\320\277\320\273\320\270\320\262\320\260 \320\260\320\262\321\202\320\276\320\274\320\276\320\261\320\270\320\273\320\265\320\274 (\320\273/100\320\272\320\274) :</span></p></body></html>", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:18pt; font-weight:700; text-decoration:none;\">\320\242\320\262\320\276\321\217 \320\277\320\276\320\265\320\267\320\264\320\272\320\260</span></p></body></html>", nullptr));
        resultLabel->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><br/></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
