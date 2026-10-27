#pragma once

#include "AbstractVehicle.h"
#include "Export.h"

class IVehicleFactory {
public:
    virtual AbstractVehicle* CreateVehicle() = 0;

    virtual ~IVehicleFactory() = default;
};
