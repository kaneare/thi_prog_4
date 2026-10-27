#include "SportsCar.h"

SportsCar::SportsCar(const std::string& manufacturer,
                     const std::string& model,
                     int year,
                     double price,
                     int doors,
                     double engineSize,
                     const std::string& fuelType,
                     double acceleration,
                     int topSpeed)
    : Car(manufacturer, model, year, price, doors, engineSize, fuelType),
      _acceleration(acceleration),
      _topSpeed(topSpeed) {
}

std::string SportsCar::GetVehicleType() const {
    return "SportsCar";
}
