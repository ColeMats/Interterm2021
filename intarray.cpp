#include <iostream>
#include <vector>
using namespace std;

int main()
{
  vector<int> numberArray(10);
  cout << "Enter 10 positive numbers separated by spaces:" << endl; // asks the user for 10 integers

  cin >> numberArray.at(0); // stores the integers into the array
  cin >> numberArray.at(1);
  cin >> numberArray.at(2);
  cin >> numberArray.at(3);
  cin >> numberArray.at(4);
  cin >> numberArray.at(5);
  cin >> numberArray.at(6);
  cin >> numberArray.at(7);
  cin >> numberArray.at(8);
  cin >> numberArray.at(9);

  for (int i = 0; i < numberArray.size(); i++) // loops through the array and prints out the integers.
  {
    cout << numberArray.at(i) << endl;
  }

  return 0;
}
