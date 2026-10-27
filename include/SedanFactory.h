#pragma once

#include "IVehicleFactory.h"
#include "Sedan.h"

class SedanFactory : public IVehicleFactory {
public:
    AbstractVehicle* CreateVehicle() override;
};
