#include <iostream>

using std::cout;

void AddOne(int* j) {
    (*j)++;
}

int main()
{
    int i = 1;
    cout << "the value of i: " << i << "\n";

    int* pv = &i;
    AddOne(pv);
    cout << "the value of i: " << i << "\n";
    return 0;
}