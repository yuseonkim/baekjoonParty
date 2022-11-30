#include <iostream>
using namespace std;
class Car {
public:
	virtual void display()
	{
		cout << "Car 클래스" << endl;
	}
};
class Bus :public Car
{
public:
	void display()
	{
		cout << "Bus 클래스" << endl;
	}
};
int main()
{
	Bus* pBus1 = new Bus;
	Car* pCar1 = dynamic_cast<Car*>(pBus1);
	if (pBus1 == 0)
		cout << "변환1 불가능" << endl;
	Car* pCar2 = new Car;
	Bus* pBus2 = dynamic_cast<Bus*>(pCar2);
	if (pBus2 == 0)
		cout << "변환2 불가능" << endl;
	Car* pCar3 = new Bus;
	Bus* pBus3 = dynamic_cast<Bus*>(pCar3);
	if (pBus3 == 0)
		cout << "변환 불가능" << endl;

	return 0;
}