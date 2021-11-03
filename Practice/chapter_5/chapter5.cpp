#include "std_lib_facilities.h"

class Bad_area { };
int area(int length, int width);
int framed_area(int length, int width);

int main()
{
    int x1 = narrow_cast<int>(2.9);
    int x2 = narrow_cast<int>(2.0);
    char c1 = narrow_cast<char>(1066);
    char c2 = narrow_cast<char>(85);
    return 0;
}

// int area(int length, int width) {
//     if (length <= 0 || width <= 0) {
//         throw Bad_area{};
//     }
//     return length * width;
// }

// int framed_area(int x, int y) {
//     constexpr int frame_width = 2;
//     if (x - frame_width <= 0 || y - frame_width <= 0) {
//         cerr << "non-positive area() argument called by framed_area()\n";
//     }
//     return area(x - frame_width, y - frame_width);
// }