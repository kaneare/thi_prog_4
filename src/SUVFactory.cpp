
#include "SUVFactory.h"

AbstractVehicle* SUVFactory::CreateVehicle() {
    return new SUV(
        "BMW",
        "X5",
        2024,
        65000.0,
        5,
        3.0,
        "Diesel",
        true,
        700.0
    );
}
