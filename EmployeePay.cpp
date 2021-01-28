#include <iostream>
using namespace std;

int main (int argc, char ** argv)
{
  double weekHours;
  double maxWorkWeekHours = 56.00;
  double grossPay;
  double socialSecurityTax;
  double federalIncomeTax;
  double stateIncomeTax;

  cout << "Please enter amount of hours this week: " << endl;
  cin  >> weekHours;

  if (weekHours > maxWorkWeekHours)
  {
    grossPay = ((weekHours - maxWorkWeekHours) * 1.5) + maxWorkWeekHours * 16.00;
  }
  else
  {
    grossPay = weekHours * 16.00;
  }
  //subtract social security tax from gross pay
  socialSecurityTax = grossPay * 0.06;
  federalIncomeTax = grossPay * 0.14;
  stateIncomeTax = grossPay * 0.05;
  cout << "Gross Pay: " << grossPay << endl;
  cout << "Net Pay: " << (grossPay - socialSecurityTax - federalIncomeTax - stateIncomeTax - 10.00) << endl;

  return 0;
}
