#include "../std_lib_facilities.h"

int main() 
try {
    string s = "Success!\n";
    for (int i = 0; i < s.length(); i++) {
        cout << s[i];
    }
    return 0;
}
catch (exception & e) {
    cerr << "error: " << e.what() << "\n";
    return 1;
}
catch(...) {
    cerr << "Opps: unknown exception!\n";
    return 2;
}