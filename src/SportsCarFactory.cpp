
#include "SportsCarFactory.h"

AbstractVehicle* SportsCarFactory::CreateVehicle() {
    return new SportsCar(
        "Porsche",
        "911",
        2024,
        120000.0,
        2,
        3.0,
        "Petrol",
        650.0,
        2
    );
}
