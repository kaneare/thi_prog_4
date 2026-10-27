#pragma once

#include "Car.h"

class THIRD_LAB_API SportsCar : public Car {
private:
    double _acceleration;
    int _topSpeed;

public:
    SportsCar(const std::string& manufacturer,
              const std::string& model,
              int year,
              double price,
              int doors,
              double engineSize,
              const std::string& fuelType,
              double acceleration,
              int topSpeed);

    std::string GetVehicleType() const override;
};
