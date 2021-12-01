#include <iostream>
#include <vector>
#include <algorithm>
using std::sort;
using std::vector;
using std::cout;

bool Compare(int f1, int f2){
    return f1 > f2;
}

int main()
{
    vector<int> numbers = {3, 8, 9, 2, 4, 5, 1, 10};
    
    sort(numbers.begin(), numbers.end(), Compare);

    for (int number : numbers) {
        cout << number << " ";
    }
}