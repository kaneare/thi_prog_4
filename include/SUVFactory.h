#pragma once

#include "IVehicleFactory.h"
#include "SUV.h"

class SUVFactory : public IVehicleFactory {
public:
    AbstractVehicle* CreateVehicle() override;
};