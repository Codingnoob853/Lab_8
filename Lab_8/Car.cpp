#include "Car.h"
#include <iostream>

Car::Car() : brand("Unknown"), cylinders(4), power(90.0) {}

Car::Car(std::string brand, int cylinders, double power)
    : brand(brand), cylinders(cylinders), power(power) {
}

Car::~Car() {}

void Car::changeBrand(const std::string& newBrand) {
    brand = newBrand;
}

void Car::changePower(double newPower) {
    power = newPower;
}

void Car::display() const {
    std::cout << "[Car] Марка: " << brand
        << ", Циліндрів: " << cylinders
        << ", Потужність: " << power << " к.с." << std::endl;
}

std::string Car::getBrand() const { return brand; }
int Car::getCylinders() const { return cylinders; }
double Car::getPower() const { return power; }