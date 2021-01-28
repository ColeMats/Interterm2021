#include <iostream>
using namespace std;

// 1 metric ton is 35,273.92 ounces

int main (int argc, char ** argv)
{
  cout << "Enter the weight of the package of cereal in ounces: " << endl;

  float metricTonOunces = 35273.92;
  float ounces;
  cin >> ounces;

  cout << "Metric tons: " << ounces / metricTonOunces << endl;
  cout << "Number of boxes for one ton: " << metricTonOunces / (ounces / metricTonOunces) << endl;

  return 0;
}
