#pragma once

#include "Car.h"

class THIRD_LAB_API Sedan : public Car {
private:
    double _trunkCapacity;

public:
    Sedan(const std::string& manufacturer,
          const std::string& model,
          int year,
          double price,
          int doors,
          double engineSize,
          const std::string& fuelType,
          double trunkCapacity);

    std::string GetVehicleType() const override;
};
