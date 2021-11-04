#include <iostream>
using std::cout;

int main()
{
    // Create the enum Color with fixed values.
    enum class Color {white, black, blue, red};

    // Create a Color variable and set it to Color::blue.
    Color my_car = Color::blue;

    // Test to see if my car is red.
    if(my_car == Color::red) {
        cout << "The color of my car is read!" << "\n";
    } else {
        cout << "The color of my car is not red." << "\n";
    }
}