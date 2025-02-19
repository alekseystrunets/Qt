#ifndef TRIP_H
#define TRIP_H

#include <QString>

class Trip {
protected:
    double fuelConsumption; // Расход топлива на 100 км (Поле 1)
    double fuelCost;        // Стоимость топлива за литр (Поле 2)

public:
    // Конструктор
    Trip(double fuelConsumption, double fuelCost);

    // Метод формирования строки с информацией об объекте
    QString info() const;

    // Метод обработки полей: стоимость одного километра пути
    double costPerKilometer() const;
};

#endif // TRIP_H
