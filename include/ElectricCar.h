#pragma once

#include "Car.h"
#include "IElectricVehicle.h"

class THIRD_LAB_API ElectricCar : public Car, public IElectricVehicle {
private:
    double _batteryCapacity;
    int _range;

public:
    ElectricCar(const std::string& manufacturer,
                const std::string& model,
                int year,
                double price,
                int doors,
                double engineSize,
                const std::string& fuelType,
                double batteryCapacity,
                int range);

    std::string GetVehicleType() const override;

    double GetBatteryCapacity() const override;
    int GetRange() const override;
};
