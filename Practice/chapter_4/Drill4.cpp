#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>
#include<float.h>

using namespace std;

int main()
{
    cout << "Enter a double\n";
    double input;
    double smallest = DBL_MAX;
    double largest = DBL_MIN;
    string unit;
    double sum = 0;
    vector<double> numbers;
    while (cin >> input >> unit) {
        if (unit == "cm") {
            input = input / 100;
        } else if (unit == "m") {
        } else if (unit == "in") {
            input = input * 0.0254;
        } else if (unit == "ft") {
            input = input * 0.3048;
        } else {
            cout << "bro what unit did you just enter cause thay didn't make sense\n";
        }
        if (input <= smallest) {
            smallest = input;
        }
        if (input > largest) {
            largest = input;
        }
        sum += input;
        cout << "The number you entered is: " << input << "\n"
            << "The smallest so far: " << smallest << "\n"
            << "The largest so far: " << largest << "\n"
            << "The sum of all numbers entered is: " << sum << "\n";

        numbers.push_back(input); 
    }

    // for (double b : numbers) {
    //     cout << b << "\n";
    // }
}