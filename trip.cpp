#include "Trip.h"

Trip::Trip(double fuelConsumption, double fuelCost)
    : fuelConsumption(fuelConsumption), fuelCost(fuelCost) {}

QString Trip::info() const {
    return QString("Расход топлива: %1 л/100км, Стоимость топлива: %2 руб/л")
        .arg(fuelConsumption)
        .arg(fuelCost);
}

double Trip::costPerKilometer() const {
    return (fuelConsumption / 100) * fuelCost;
}
