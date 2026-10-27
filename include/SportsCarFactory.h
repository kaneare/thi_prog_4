#pragma once

#include "IVehicleFactory.h"
#include "SportsCar.h"

class SportsCarFactory : public IVehicleFactory {
public:
    AbstractVehicle* CreateVehicle() override;
};