#include "SedanFactory.h"

AbstractVehicle* SedanFactory::CreateVehicle() {
    return new Sedan(
        "Toyota",
        "Camry",
        2024,
        30000,
        4,
        2.5,
        "Petrol",
        500
    );
}
