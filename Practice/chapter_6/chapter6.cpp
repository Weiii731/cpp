#include "../std_lib_facilities.h"

class Token {
public:
    char kind;
    double value;
    
    // constructor
    Token(char k): kind{k}, value{0.0} {}
    Token(char k, double v): kind{k}, value{v} {}
};

int main()
{
    cout << "Please enter expression (we can handle +, -, *, and /)\n ";
    cout << "add an x to end expression (e.g., 1 + 2 * 3x): ";
    int lval = 0;
    int rval;
    cin >> lval;
    if (!cin) {
        error("no first operand");
    }
    for (char op; cin >> op;) {
        if (op != 'x') {
            cin >> rval;
        }
        if (!cin) {
            error("no second operand");
        }
        switch(op) {
            case '+':
                lval += rval;
                break;
            case '-':
                lval -= rval;
                break;
            case '*':
                lval *= rval;
                break;
            case '/':
                lval /= rval;
                break;
            default:
                cout << "Result: " << lval << '\n';
                return 0;
        }
    }
    error("bad experession");
}