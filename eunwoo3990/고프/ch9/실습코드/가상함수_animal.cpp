#include <iostream>
using namespace std;

class Animal {
public:
	virtual void speak() { cout << "Animal Speak!" << endl; }
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
	Animal* a1 = new Dog();
	a1->speak();

	Animal* a2 = new Cat();
	a2->speak();
	return 0;
}