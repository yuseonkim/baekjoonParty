#include <iostream>
using namespace std;

int dividedPizza(int pizza_slices, int person);

int main()
{
	int pizza_slices = 12;
	int persons = 0;
	int slices_per_person = 0;

	try
	{
		cout << "피자수를 입력하셈";
		cin >> pizza_slices;
		cout << "사람 수를 입력하셈";
		cin >> persons;

		slices_per_person = dividedPizza(pizza_slices, persons);
		cout << "한 사람당 피자는" << slices_per_person << " 입니다." << endl;
	}
	catch (int e)
	{
		cout << "사람이" << e << " 명입니다." << endl;
	}
	return 0;
}
int dividedPizza(int pizza_slices, int person)
{
	if (person == 0)
		throw person;
	return pizza_slices / person;
}