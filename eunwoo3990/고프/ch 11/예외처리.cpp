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
		cout << "���ڼ��� �Է��ϼ�";
		cin >> pizza_slices;
		cout << "��� ���� �Է��ϼ�";
		cin >> persons;

		slices_per_person = dividedPizza(pizza_slices, persons);
		cout << "�� ����� ���ڴ�" << slices_per_person << " �Դϴ�." << endl;
	}
	catch (int e)
	{
		cout << "�����" << e << " ���Դϴ�." << endl;
	}
	return 0;
}
int dividedPizza(int pizza_slices, int person)
{
	if (person == 0)
		throw person;
	return pizza_slices / person;
}