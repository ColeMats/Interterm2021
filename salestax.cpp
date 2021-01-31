#include <iostream>
using namespace std;

float addTax(float taxRate, float &cost) //computes the tax of the cost and returns the total cost with tax.
{
  float costAfterTax;
  costAfterTax = cost + (cost * taxRate);
  return costAfterTax;
}

int main()
{
  cout << "Enter in tax as a decimal and cost of item: " << endl; // asks the user for the amount of tax and cost of the item
  float taxRate;
  cin >> taxRate;

  float cost;
  cin >> cost;
  float total = addTax(taxRate, cost); // calls the addTax function
  cout << "Cost after tax: $" << total << endl; // prints out the total cost with tax. 
  return 0;
}
