
#ifndef CAR_H
#define CAR_H

#include <string>
using std::string;

class Car {
    public:
        void PrintCarData();
        void Incrementdistance();

    // constructor for Car
    Car(string c, int n) : color(c), number(n) {}

    private:
        string color;
        int number;
        int distance = 0;
};

#endif