//
// Program Purpose: Program to compute curved surface Area
//                  Warm Up Exercises Week 3
// Last Modified:17/02/2025
//
//**********************************************************************************
#include <cmath>
// #include <cstdlib>
#include <iostream>
// #include <string>
//  #include <vector>
//  #include <iomanip>
//  #include <ctime>
//  #include <fstream>
//  #include <iostream>
using namespace std;
// #define PI = 4 * atan(1);

double Surface_of_Cylinder(double r, double h);
int main() {
  double r, h;
  cout << "This program Calculates the Surface of a Cylinder!" << "\n";
  cout << "Please enter a value for r: " << "\n";
  cin >> r;
  cout << "Please enter a value for h: " << "\n";
  cin >> h;
  cout << "You entered, r: " << r << " " << "h: " << h << "\n";
  cout << "The calculated Surface of the Cylinder is: "
       << Surface_of_Cylinder(r, h) << "\n";

  return 0;
}

double Surface_of_Cylinder(double r, double h) {
  double S, PI;

  PI = 4 * atan(1);
  S = (2 * PI) * (r * h) + PI * (pow(r, 2));
  return S;
}
