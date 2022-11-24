#include <iostream>
using namespace std;

class Animal{
public:
	virtual void speak() { cout << "Animal Speak" << endl; }
};

class Dog : public Animal {
public:
	void speak() { cout << "�۸�" << endl; }
};
class Cat : public Animal {
public:
	void speak() { cout << "�Ŀ�" << endl; }
};

int main()
{
	Dog d;
	Animal& a1 = d;
	a1.speak();

	Cat c;
	Animal& a2 = c;
	a2.speak();

}