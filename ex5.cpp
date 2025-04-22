//
// Program Purpose: Warm Up Exercises
//                :
// Last Modified: 17/02/2025
//
//**********************************************************************************
// #include <cmath>
// #include <cstdlib>
#include <iostream>
#include <string>
// #include <vector>
// #include <iomanip>
// #include <ctime>
// #include <fstream>
// #include <iostream>
using namespace std;
void DisplayMenu(char in);

int main() {
  char sport_char = 'r';

  cout << "This program displays sports based on input characters!" << "\n";
  cout << "Type a letter: " << "\n";
  cin >> sport_char;
  DisplayMenu(sport_char);
  cout << "\n";

  return 0;
}

void DisplayMenu(char in) {
  switch (in) {
  case 'r':
  case 'R':
    cout << "I prefer rugby over football and tennis" << "\n";
    break;
  case 't':
  case 'T':
    cout << "I prefer tennis over football and rugby" << "\n";
    break;
  case 'f':
  case 'F':
    cout << "I prefer football over tennis and rugby" << "\n";
    break;
  default:
    cout << "Please enter a valid character: r,t,f" << "\n";
  }
}
