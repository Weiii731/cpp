#include "../std_lib_facilities.h"

double ctok(double c) {
    if (c < - 273.15) {
        throw runtime_error("temps are too low");
    }
    double k = c + 273.15;
    return k;
}
int main() 
try {
    double c = 0;
    cin >> c;
    double k = ctok(c);
    cout << k << "\n";
} catch(exception& e) {
    cerr << "error: " << e.what() << "\n";
    return 1;
}