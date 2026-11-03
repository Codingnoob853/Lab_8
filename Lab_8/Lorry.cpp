#include "Lorry.h"
#include <iostream>

Lorry::Lorry() : Car(), loadCapacity(1.5) {}

Lorry::Lorry(std::string brand, int cylinders, double power, double loadCapacity)
    : Car(brand, cylinders, power), loadCapacity(loadCapacity) {
}

Lorry::~Lorry() {}

void Lorry::changeLoadCapacity(double newCapacity) {
    loadCapacity = newCapacity;
}

void Lorry::display() const {
    std::cout << "[Lorry] Марка: " << brand
        << ", Циліндрів: " << cylinders
        << ", Потужність: " << power << " к.с."
        << ", Вантажопідйомність: " << loadCapacity << " т." << std::endl;
}

double Lorry::getLoadCapacity() const { return loadCapacity; }