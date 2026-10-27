#include "ElectricCar.h"

ElectricCar::ElectricCar(const std::string& manufacturer,
                         const std::string& model,
                         int year,
                         double price,
                         int doors,
                         double engineSize,
                         const std::string& fuelType,
                         double batteryCapacity,
                         int range)
    : Car(manufacturer, model, year, price, doors, engineSize, fuelType),
      _batteryCapacity(batteryCapacity),
      _range(range) {
}

std::string ElectricCar::GetVehicleType() const {
    return "ElectricCar";
}

double ElectricCar::GetBatteryCapacity() const {
    return _batteryCapacity;
}

int ElectricCar::GetRange() const {
    return _range;
}
