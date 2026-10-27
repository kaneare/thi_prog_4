#pragma once

#include "IVehicleFactory.h"
#include "ElectricCar.h"

class ElectricCarFactory : public IVehicleFactory {
public:
    AbstractVehicle* CreateVehicle() override;
};