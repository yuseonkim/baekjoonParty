#include <iostream>
using namespace std;

#include "HourlyEmployee.h"

HourlyEmployee::HourlyEmployee()
  : Employee(), wageRate(0), hours(0)
{ /* nothing */ }

HourlyEmployee::HourlyEmployee(string theName, string theNumber, double theWageRate, double theHours)
  : Employee(theName, theNumber), wageRate(theWageRate), hours(theHours)
{ /* nothing */ }

void HourlyEmployee::setRate(double newWageRate) {
  this->wageRate = newWageRate;
}

double HourlyEmployee::getRate() const {
  return this->wageRate;
}

void HourlyEmployee::setHours(double hoursWorked) {
  this->hours = hoursWorked;
}  

double HourlyEmployee::getHours() const {
  return this->hours;
}

void HourlyEmployee::printCheck() {
  setNetPay(hours * wageRate);
  cout << "\n--------------------------\n";
  cout << "Pay to the order of " << getName() << endl;
  cout << "Check Stub Not Negotiable" << endl;
  cout << "Employee Number: " << getSsn() << endl;
  cout << "Hourly Employee. \nHours worked: " << hours
       << " Rate: " << wageRate << " Pay: " << getNetPay() << endl;
  cout << "\n--------------------------\n";
}
