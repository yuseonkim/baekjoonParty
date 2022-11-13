#include <iostream>
using namespace std;

#include "Employee.h"

Employee::Employee()
  : name("No name yet"), ssn("No number yet"), netPay(0)
{ /* nothing */ }

Employee::Employee(string theName, string theNumber)
  : name(theName), ssn(theNumber), netPay(0)
{ /* nothing */ }

string Employee::getName() const { return name; }

string Employee::getSsn() const { return ssn; }

double Employee::getNetPay() const { return netPay; }

void Employee::setName(string theName) { name = theName; }

void Employee::setSsn(string newSsn) { ssn = newSsn; }

void Employee::setNetPay(double newNetPay) { netPay = newNetPay; }

void Employee::printCheck() const { cout << "ERROR: Employee::printCheck" << endl; }


/* 
��� : ��� Ŭ�����κ��� �Ļ� Ŭ������ �����ϴ� ���
- ��� Ŭ������ ��� ������ ��� �Լ��� �Ļ� Ŭ������ �ڵ����� ����
- �Ļ� Ŭ�������� ��� ������ ��� �Լ��� ���� �߰��ϰų� ������

���� - ���� �޿��� �޴� ������ �ð��� �޿��� �޴� ����

Employee (��� Ŭ����) : �̸��� �ֹι�ȣ(�� ������ ������ ������)�� �����ϴ� Ŭ����

SalariedEmployee : ���� �޿��� �޴� ����
-> �̸�, �ֹι�ȣ, �� �޿�, �ֱ�

HourlyEmployee : �ð��� �޿��� �޴� ����
-> �̸�, �ֹι�ȣ, �� �޿�, �ٷνð�, �ñ�

# �� ������ ������ ��� �̸��� �ֹι�ȣ�� ���´ٴ� ���� ����
  but, '���� ���� ���'���� �� ������ �������� ���� �ٸ�!!

# ��� Ŭ������ ��� ���� �Ӽ��� ��ӹް�, �� ������ ������ Ư���� �ݿ��ϴ� �Ӽ��� �߰��Ͽ� �Ļ� Ŭ���� ����

*/