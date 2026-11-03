#include <iostream>
#include "Car.h"
#include "Lorry.h"
#include<windows.h>    

Car processCar(Car& car) {
    car.display();
    car.changePower(car.getPower() + 10);
    return car;
}

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    Car basicCar("Toyota", 4, 150.0);
    basicCar.display();

    basicCar.changePower(160.0);
    std::cout << "Після зміни потужності Car: " << basicCar.getPower() << " к.с.\n" << std::endl;

    Lorry lorry("MAN", 8, 400.0, 20.0);
    lorry.display();

    lorry.changeBrand("Volvo");
    lorry.changeLoadCapacity(25.0);
    std::cout << "Після зміни марки та вантажопідйомності:" << std::endl;
    lorry.display();
    std::cout << std::endl;

    std::cout << "--- Підстановки ---" << std::endl;
    Car* refCar = &lorry; 
    refCar->display();    

    processCar(lorry);

    return 0;
}