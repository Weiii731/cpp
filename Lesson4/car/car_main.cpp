#include <vector>
#include<string>
#include "car.h"

using std::vector;
using std::string;

int main()
{
    // Create an empty vector of pointers to Cars 
    // and a null pointer to a car.
    vector<Car*> car_vect;
    Car* cp = nullptr;
    // The vector of colors for the cars:
    vector<string> colors = {"green", "red", "blue"};

    // Create 100 cars with different colors and 
    // push pointers to each of those cars into the vector.
    for (int i = 0; i < 100; i++) {
        cp = new Car(colors[i%3], i+1);
        car_vect.push_back(cp);
    }

    // Move each car forward by 1.
    for (Car* cp : car_vect) {
        cp->Incrementdistance();
    }
    // Print data about each car.
    for (Car* cp : car_vect) {
        cp->PrintCarData();
    }
}