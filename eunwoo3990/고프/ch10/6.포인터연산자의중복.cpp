#include <iostream>
#include <string>
using namespace std;

class Car {
	friend ostream& operator<<(ostream& os, const Car& c);
public:
	int speed;
	int gear;
	string color;
	Car(int s, int g = 1, string c = "white") : speed(s), gear(g), color(c) {	}
	void setSpeed(int s) {
		speed = s;
	}
	int getSpeed() { return speed; }
};
ostream& operator<<(ostream& os, const Car& c) {
	os << "속도: " << c.speed << " 기어: " << c.gear << " 색상: " << c.color << endl;
	return os;
}

class Pointer {
	Car* pc;
public:
	Pointer(Car* p) :pc(p){}
	~Pointer() { delete pc; }
	Car* operator->() const { return pc; }
	Car& operator*() const { return *pc; }
};

int main()
{
	Pointer p(new Car(0, 1, "red"));
	p->speed = 100; //(p.operator->())->speed;
	cout << *p;
	(*p).speed = 200;
	cout << *p;
	p->setSpeed(300);
	cout << *p;
	return 0;
}