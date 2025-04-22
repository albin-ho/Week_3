// Program Purpose: Pythagaors function
//
// Author:
// Last Modified:
//
//**********************************************************************************
#include <cmath>
// #include <cstdlib>
#include <iostream>
// #include <string>
// #include <vector>
// #include <iomanip>
// #include <ctime>
// #include <fstream>
// #include <iostream>
using namespace std;
double Pythagoras_Theory(double a, double b, double c);
int main() {

  double a, b, c;
  cout
      << "This program calculates 3 values to check is they can make a triangle"
      << "\n";
  cout << "Testing with a=9,b=5,c=8" << "\n";
  cout << "Please enter a value for a, b, c " << "\n";
  std::cin >> a;
  cout << "Please enter a value for b " << "\n";
  cin >> b;
  cout << "Please enter a value for c " << "\n";
  cin >> c;
  cout << "The angle for cos c = " << Pythagoras_Theory(a, b, c) << "\n";
  cout << "\n";
  return 0;
}
double Pythagoras_Theory(double a, double b, double c) {
  //  bool validated = false;
  // using the cosin rule!
  // cos(c) = a2 + b2 -c2 / 2ab
  //
  double temp1, temp2;
  cout << "cos c == a2 + b2 - c2 =  " << pow(a, 2) << " + " << pow(b, 2)
       << " - " << pow(c, 2) << " = "
       << (pow(a, 2)) + (pow(b, 2)) - ((pow(c, 2))) << "\n";
  cout << " '\'2ab = " << "2x" << a << "x" << b << "= " << (2 * a * b) << "\n";
  cout << "finally c2 = a2 + b2 - 2ab x cos(c) " << "\n";
  cout << pow(a, 2) << " + " << pow(b, 2) << " - " << (2 * a * b) << " x "
       << (cos(c)) << "\n";
  c = (pow(c, 2));
  cout << "Answer is " << (pow(a, 2)) + (pow(b, 2)) - (2 * a * b) * cos(c)
       << "\n";

  //  c = ((pow(a, 2) + pow(b, 2) - pow(c, 2)) / (2 * a * b)) * cos(c);

  //  c = cos(c);
  return c;
}
