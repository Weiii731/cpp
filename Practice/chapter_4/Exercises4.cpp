#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>
#include<float.h>
#include<math.h>

using namespace std;

int main()
{
    double sum = 0;
    int num_of_square;
    cout << "Enter number of square\n";
    cin >> num_of_square;
    for (int i = 0; i < num_of_square; i++) {
        sum += pow(2, i);
    }
    cout << "Number of rice grain: " << sum << "!\n";
}

int area(int length, int width) {
    return length * width;
}