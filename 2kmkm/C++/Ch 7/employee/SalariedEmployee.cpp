#include <iostream>
using namespace std;

#include "SalariedEmployee.h"

SalariedEmployee::SalariedEmployee()
  : Employee(), salary(0)
{ /* nothing */ }

SalariedEmployee::SalariedEmployee(string theName, string theSsn, double theWeeklySalary)
  : Employee(theName, theSsn), salary(theWeeklySalary)
{ /* nothing */ }

double SalariedEmployee::getSalary() const {
  return this->salary;
}

void SalariedEmployee::setSalary(double newSalary) {
  this->salary = newSalary;
}

void SalariedEmployee::printCheck() {
    setNetPay(salary);
  cout << "\n--------------------------\n";
  cout << "Pay to the order of " << getName() << endl;
  cout << "The sum of " << getSalary() << " Dollars" << endl;
  cout << "Check Stub Not Negotiable" << endl;
  cout << "Employee Number: " << getSsn() << endl;
  cout << "Salaried Employee. Regular Pay: " << getNetPay() << endl;
  cout << "\n--------------------------\n";
}
