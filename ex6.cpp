// Program Purpose:Calculates the area of a square/circle/trapezium
// Author:
// Last Modified:19/02/2025
//
//**********************************************************************************
#include <cmath>
// #include <cstdlib>
#include <iostream>
// #include <string>
// #include <vector>
#include <iomanip>
// #include <ctime>
// #include <fstream>
// #include <iostream>
using namespace std;
void Area(char f);
int main() {
  char UserInput;
  cout << "This program calculates the area of a circle(c), square(s) or "
          "Trapezium(t)"
       << "\n";
  cout << "Press c,s,t to continue" << "\n";
  cin >> UserInput;
  Area(UserInput);
  return 0;
}

void Area(char f) {
  double r;
  double a = 5;
  double b = 6, h = 7;
  double PI = 4 * atan(1);
  switch (f) {
  case 's':
  case 'S':
    cout << "Calculating Area of a Square: " << "\n";
    cout << "The area of square of 5cm is: " << pow(a, 2) << "cm²" << "\n";
    break;
  case 'c':
  case 'C':
    cout << "Calculating Area of a Circle: " << "\n";
    // Using formula Area= Pi × r2

    cout << fixed << setprecision(2); // Limit output to 2 decimal places
    cout << "The area of a circle with a radius of 5 is: " << (PI * pow(a, 2))
         << "cm²" << "\n";
    break;
  case 't':
  case 'T':
    cout << "Calculating Area of a Trapezium: " << "\n";
    // Using formula A = (a + b) × h / 2
    cout << "Assuming a=5, b=6, h=7" << "\n";
    cout << "The area of a Trapezium is: " << (a + b) * (h / 2) << "cm²"
         << "\n";

    break;
  default:
    cout << "Please enter t,s,or c:"
         << "\n"
            "\n";
  }
}
