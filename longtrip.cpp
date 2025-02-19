#include "LongTrip.h"

LongTrip::LongTrip(double fuelConsumption, double fuelCost, int distance)
    : Trip(fuelConsumption, fuelCost), distance(distance) {}

double LongTrip::totalTripCost() const {
    return costPerKilometer() * distance;
}
