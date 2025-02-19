#include "mainwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);
    QApplication a(argc, argv);

    // Установка локали для обработки запятой как разделителя
    QLocale::setDefault(QLocale(QLocale::Russian, QLocale::Russia));

    MainWindow w;
    w.show();
    return a.exec();
}
