#include "Car.h"

Car::Car(const std::string& manufacturer,
         const std::string& model,
         int year,
         double price,
         int doors,
         double engineSize,
         const std::string& fuelType)
    : AbstractVehicle(manufacturer, model, year, price),
      _doors(doors),
      _engineSize(engineSize),
      _fuelType(fuelType) {
}

std::string Car::GetVehicleType() const {
    return "Car";
}
