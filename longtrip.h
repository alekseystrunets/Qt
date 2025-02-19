#ifndef LONGTRIP_H
#define LONGTRIP_H

#include "Trip.h"

class LongTrip : public Trip {
private:
    int distance; // Количество километров пути

public:
    // Конструктор
    LongTrip(double fuelConsumption, double fuelCost, int distance);

    // Метод обработки данных: стоимость поездки
    double totalTripCost() const;
};

#endif // LONGTRIP_H
