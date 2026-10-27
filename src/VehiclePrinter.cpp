
#include "VehiclePrinter.h"

#include <iostream>

void VehiclePrinter::Print(const AbstractVehicle& vehicle) {
    std::cout << "Vehicle type: "
              << vehicle.GetVehicleType() << '\n';

    std::cout << "Price: "
              << vehicle.GetPrice() << '\n';

    std::cout << "------------------------\n";
}
