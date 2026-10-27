#include "VehicleService.h"
#include "VehiclePrinter.h"
#include <iostream>

#include "SedanFactory.h"
#include "SUVFactory.h"
#include "SportsCarFactory.h"
#include "ElectricCarFactory.h"

void VehicleService::AddVehicle(IVehicleFactory& factory) {
    vehicles.emplace_back(factory.CreateVehicle());
}

void VehicleService::CreateDefaultVehicles() {
    SedanFactory sedanFactory;
    SUVFactory suvFactory;
    SportsCarFactory sportsCarFactory;
    ElectricCarFactory electricCarFactory;

    AddVehicle(sedanFactory);
    AddVehicle(suvFactory);
    AddVehicle(sportsCarFactory);
    AddVehicle(electricCarFactory);
}

void VehicleService::ShowVehicles() const {
    for (const auto& vehicle : vehicles) {
        VehiclePrinter::Print(*vehicle);
    }
}

int VehicleService::GetVehicleCount() const {
    return static_cast<int>(vehicles.size());
}