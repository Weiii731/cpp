#ifndef car_h
#define car_h

#include <string>
using std::string;
using std::cout;

class Car {
    public:
        void PrintCarData();
        void IncrementDistance();

    // constructor using constructor list
    Car(string c, int n) : color(c) , number(n) {}

    private:
        string color;
        int distance = 0;
        int number;
};  

#endif