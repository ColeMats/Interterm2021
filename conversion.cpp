#include <iostream>
using namespace std;

void UserInput(int &userFeet, int &userInches, bool &keepLooping)
{
  cout << "Would you like to convert a measurement from feet & inches to meters and centimeters?" << endl;
  cout << "Type yes to continue or exit to quit: " << endl; // askes the user if they would like to convert a measurement
  string userInput;
  cin >> userInput;

  if(userInput == "yes") // if the user enters the string "yes"...
  {
    cout << "Enter your feet and inches measurements seperated by spaces (6 3 for 6 feet 3 inches): " << endl;
    int feet;
    cin >> userFeet; // takes the first integer and stores it in userFeet

    int inches;
    cin >> userInches; //takes the second integer and stores it in userInches
  }
  else if (userInput == "exit") // if the user enters the string "exit"
  {
    exit(0); // exits out of the program
  }
  else // if the user enters a string other than "yes" or "exit"...
  {
    cout << "Error reading in input. Exiting..." << endl;
    exit(0); // exits out of the program
  }
}

void Calculate(int userFeet, int userInches, float &meters, float &centimeters)
{
  int inches = (userFeet * 12) + userInches; // converts feet to inches and finds the total inches
  meters = (inches / 12.0000) * 0.3048; // converts the inches back into feet and then into meters
  centimeters = meters * 100; // converts the meters to centimeters
}

void PrintConversions(float meters, float centimeters) // prints out all of the conversions
{
  cout << "Your measurements in meters: " << meters << endl;
  cout << "Your measurements in centimeters: " << centimeters << endl;
}

int main()
{
  bool keepLooping = true;
  int userFeet; // stores the user's input for feet
  int userInches;
  float meters;
  float centimeters;
  while (keepLooping) // while loop to keep the program looping until the user types exit 
  {
    UserInput(userFeet, userInches, keepLooping);
    Calculate(userFeet, userInches, meters, centimeters);
    PrintConversions(meters, centimeters);
  }


  return 0;
}
