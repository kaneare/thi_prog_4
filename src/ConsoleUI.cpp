#include "ConsoleUI.h"

#include <iostream>

void ConsoleUI::Run() {
    std::cout << "=== Vehicle Management System ===\n\n";

    service.CreateDefaultVehicles();

    std::cout << "List of vehicles:\n\n";
    service.ShowVehicles();

    std::cout << "Total vehicles: "
              << service.GetVehicleCount()
              << '\n';
}