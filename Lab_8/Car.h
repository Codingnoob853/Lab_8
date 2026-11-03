#ifndef CAR_H
#define CAR_H

#include <string>

class Car {
protected:
    std::string brand;
    int cylinders;
    double power;

public:
    Car();
    Car(std::string brand, int cylinders, double power);
    virtual ~Car();

    void changeBrand(const std::string& newBrand);
    void changePower(double newPower);

    virtual void display() const;

    std::string getBrand() const;
    int getCylinders() const;
    double getPower() const;
};

#endif