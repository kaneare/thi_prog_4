
#include "ElectricCarFactory.h"

AbstractVehicle* ElectricCarFactory::CreateVehicle() {
    return new ElectricCar(
        "Tesla",
        "Model 3",
        2024,
        40000.0,
        5,
        0.0,
        "Electric",
        500.0,
        1
    );
}
