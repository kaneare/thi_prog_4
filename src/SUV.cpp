#include "SUV.h"

SUV::SUV(const std::string& manufacturer,
         const std::string& model,
         int year,
         double price,
         int doors,
         double engineSize,
         const std::string& fuelType,
         bool fourWheelDrive,
         double groundClearance)
    : Car(manufacturer, model, year, price, doors, engineSize, fuelType),
      _fourWheelDrive(fourWheelDrive),
      _groundClearance(groundClearance) {
}

std::string SUV::GetVehicleType() const {
    return "SUV";
}
