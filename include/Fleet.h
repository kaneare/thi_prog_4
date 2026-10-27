#pragma once

#include "AbstractVehicle.h"
#include <vector>

class THIRD_LAB_API Fleet {
private:
    std::vector<AbstractVehicle*> _vehicles;

public:
    void AddVehicle(AbstractVehicle* vehicle);
    int GetVehicleCount() const;
};
