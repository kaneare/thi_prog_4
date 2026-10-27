#pragma once

#include "AbstractVehicle.h"
#include <string>

class  Car : public AbstractVehicle {
protected:
    int _doors;
    double _engineSize;
    std::string _fuelType;

public:
    Car(const std::string& manufacturer,
        const std::string& model,
        int year,
        double price,
        int doors,
        double engineSize,
        const std::string& fuelType);

    std::string GetVehicleType() const override;
};
