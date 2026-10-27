#pragma once

#include <memory>
#include <vector>

#include "AbstractVehicle.h"
#include "IVehicleFactory.h"

class VehicleService {
private:
    std::vector<std::unique_ptr<AbstractVehicle>> vehicles;

public:
    void AddVehicle(IVehicleFactory& factory);
    void CreateDefaultVehicles();
    void ShowVehicles() const;
    int GetVehicleCount() const;
};