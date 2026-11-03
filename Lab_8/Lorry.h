#ifndef LORRY_H
#define LORRY_H

#include "Car.h"

class Lorry : public Car {
private:
    double loadCapacity; 

public:
    Lorry();
    Lorry(std::string brand, int cylinders, double power, double loadCapacity);
    ~Lorry() override;
    
    void changeLoadCapacity(double newCapacity);

    void display() const override;

    double getLoadCapacity() const;
};

#endif