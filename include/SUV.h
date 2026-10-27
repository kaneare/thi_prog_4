#pragma once

#include "Car.h"

class THIRD_LAB_API SUV : public Car {
private:
    bool _fourWheelDrive;
    double _groundClearance;

public:
    SUV(const std::string& manufacturer,
        const std::string& model,
        int year,
        double price,
        int doors,
        double engineSize,
        const std::string& fuelType,
        bool fourWheelDrive,
        double groundClearance);

    std::string GetVehicleType() const override;
};
