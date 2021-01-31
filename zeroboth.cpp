#include <iostream>
using namespace std;

void zeroBoth(int &firstVar, int &secondVar) // converts the user's integers into zeroes
{
  firstVar = 0;
  secondVar = 0;
}

int main()
{
  cout << "Enter two positive integers seperated by spaces: " << endl;
  int firstVar;
  cin >> firstVar; // assigns the user's first number to the var
  int secondVar;
  cin >> secondVar; // assigns the user's second number to the var

  zeroBoth(firstVar , secondVar);
  cout << firstVar << " " << secondVar << endl; // prints out the user's integers after zeroed out

  return 0;
}
