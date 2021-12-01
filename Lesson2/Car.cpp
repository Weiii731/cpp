#include <string>
#include <cstring>
#include <iostream>
using std::string;

class Car {
    // TODO: Declare private attributes
    private:
        int horsepower;
        int weight;
        char brand[1024];
    // TODO: Declare getter and setter for brand
    public:
        void setHorsepower(int hp);
        void setWeight(int weight);
        void setBrand(string brand);
        int getHorsepower();
        int getWeight();
        string getBrand();
};

// Define setters
void Car::setHorsepower(int hp) {
    Car::horsepower = hp;
}

void Car::setWeight(int weight) {
    Car::weight = weight;
}

void Car::setBrand(string brand) {
    // convert string to char
    strcpy(Car::brand, brand.c_str());
}
// Define getters
int Car::getHorsepower() {return Car::horsepower;}
int Car::getWeight() {return Car::weight;}
string Car::getBrand() {
    string carBrand(Car::brand);
    return carBrand;
}
// Test in main()
int main() 
{
    Car car;
    car.setBrand("Peugeot");
    std::cout << car.getBrand() << "\n";   
}