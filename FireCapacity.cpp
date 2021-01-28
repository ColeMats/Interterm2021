#include <iostream>
using namespace std;

int main (int argc, char ** argv)
{
  int maxCapacity;
  cout << "Enter the maximum room capacity: " << endl;
  cin >> maxCapacity;

  int numAttending;
  cout << "Enter the number of people attending: " << endl;
  cin >> numAttending;

  if (numAttending <= maxCapacity)
  {
    cout << "It is legal to hold the meeting." << endl;
  }

  else if (numAttending > maxCapacity)
  {
    cout << "Meeting cannot be held as planned due to fire regulations. " << endl;
    cout << "The amount of people needed to be excluded in order for the meeting to take place: " << numAttending - maxCapacity << endl;
  }

  return 0;
}
