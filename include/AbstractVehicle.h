#pragma once

#include "Export.h"
#include <string>

class THIRD_LAB_API AbstractVehicle {
protected:
    std::string _manufacturer;
    std::string _model;
    int _year;
    double _price;

public:
    AbstractVehicle(const std::string& manufacturer,
                    const std::string& model,
                    int year,
                    double price);

    virtual std::string GetVehicleType() const = 0;

    double GetPrice() const;

    virtual ~AbstractVehicle();
};
