#include <iostream>
using namespace std;
class Car {
public:
	virtual void display()
	{
		cout << "Car Ŭ����" << endl;
	}
};
class Bus :public Car
{
public:
	void display()
	{
		cout << "Bus Ŭ����" << endl;
	}
};
int main()
{
	Bus* pBus1 = new Bus;
	Car* pCar1 = dynamic_cast<Car*>(pBus1);
	if (pBus1 == 0)
		cout << "��ȯ1 �Ұ���" << endl;
	Car* pCar2 = new Car;
	Bus* pBus2 = dynamic_cast<Bus*>(pCar2);
	if (pBus2 == 0)
		cout << "��ȯ2 �Ұ���" << endl;
	Car* pCar3 = new Bus;
	Bus* pBus3 = dynamic_cast<Bus*>(pCar3);
	if (pBus3 == 0)
		cout << "��ȯ �Ұ���" << endl;

	return 0;
}