#ifndef D_EMPLOYEE
#define D_EMPLOYEE

#include <iostream>
using namespace std;

class Employee {
 public:
  Employee();
  Employee(string theName, string theSsn);
  string getName() const;
  string getSsn() const;
  double getNetPay() const;
  void setName(string newName);
  void setSsn(string newSsn);
  void setNetPay(double newNetPay);
  void printCheck() const;
 private:
  string name;
  string ssn;
  double netPay;
};

#endif // D_EMPLOYEE
