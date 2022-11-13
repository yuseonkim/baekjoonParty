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
상속 : 기반 클래스로부터 파생 클래스를 정의하는 방법
- 기반 클래스의 멤버 변수와 멤버 함수를 파생 클래스에 자동으로 포함
- 파생 클래스에서 멤버 변수와 멤버 함수를 새로 추가하거나 재정의

예제 - 고정 급여를 받는 직원과 시간제 급여를 받는 직원

Employee (기반 클래스) : 이름과 주민번호(두 형태의 직원의 공통점)을 포함하는 클래스

SalariedEmployee : 고정 급여를 받는 직원
-> 이름, 주민번호, 총 급여, 주급

HourlyEmployee : 시간제 급여를 받는 직원
-> 이름, 주민번호, 총 급여, 근로시간, 시급

# 두 형태의 직원들 모두 이름과 주민번호를 갖는다는 점은 동일
  but, '월급 지급 방식'에서 두 형태의 직원들은 서로 다름!!

# 기반 클래스의 모든 공통 속성을 상속받고, 각 형태의 직원의 특성을 반영하는 속성을 추가하여 파생 클래스 생성

*/