#ifndef D_HOURLYEMPLOYEE
#define D_HOURLYEMPLOYEE

#include <iostream>
using namespace std;

#include "Employee.h"

class HourlyEmployee : public Employee {
 public:
  HourlyEmployee();
  HourlyEmployee(string theName, string theSsn,
		 double theWageRate, double theHours);
  void setRate(double newWageRate);
  double getRate() const;
  void setHours(double hoursWorked);
  double getHours() const;
  void printCheck();
 private:
  double wageRate;
  double hours;
};

#endif // D_HOURLYEMPLOYEE
