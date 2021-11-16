#include <iostream>
#include <string>
#include "car.h"

int main() {
    // initialize car instance
    Car car_1 = Car("green", 1);
    Car car_2 = Car("red", 2);
    Car car_3 = Car("red", 3);

    // increment car 1 position by 1
    car_1.IncrementDistance();

    // print out the position of each car
    car_1.PrintCarData();
    car_2.PrintCarData();
    car_3.PrintCarData();

}