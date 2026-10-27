#include "Sedan.h"

Sedan::Sedan(const std::string& manufacturer,
             const std::string& model,
             int year,
             double price,
             int doors,
             double engineSize,
             const std::string& fuelType,
             double trunkCapacity)
    : Car(manufacturer, model, year, price, doors, engineSize, fuelType),
      _trunkCapacity(trunkCapacity) {
}

std::string Sedan::GetVehicleType() const {
    return "Sedan";
}
