#include "AbstractVehicle.h"

AbstractVehicle::AbstractVehicle(const std::string& manufacturer,
                                 const std::string& model,
                                 int year,
                                 double price)
    : _manufacturer(manufacturer),
      _model(model),
      _year(year),
      _price(price) {
}

double AbstractVehicle::GetPrice() const {
    return _price;
}

AbstractVehicle::~AbstractVehicle() = default;
