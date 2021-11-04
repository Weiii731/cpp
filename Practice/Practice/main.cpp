#include <iostream>
#include <sstream>
#include <string>

using std::istringstream;
using std::cout;
using std::string;

int main ()
{
  string a = "1 2 3";

  istringstream my_stream(a);

  int n;

  while (my_stream >> n){
    if (my_stream){
      cout << "That stream was successful: " << n << "\n";
    }
    else {
      cout << "That stream was NOT successful!" << "\n";
    }
  }
}