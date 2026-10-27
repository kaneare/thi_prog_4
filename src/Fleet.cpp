#include "Fleet.h"

void Fleet::AddVehicle(AbstractVehicle* vehicle) {
    if (vehicle != nullptr) {
        _vehicles.push_back(vehicle);
    }
}

int Fleet::GetVehicleCount() const {
    return static_cast<int>(_vehicles.size());
}
