#include <iostream>
#include <string>
using namespace std;

class Book
{
private:
	int isbn;
	string title;
public:
	Book() {
		isbn = 0;
		title = "unknown";
	}
	Book(int isbn, string& title) {
		this->isbn = isbn;
		this->title = title;
	}
	Book(int isbm) { //��ȯ������
		this->isbn = isbn;
		this->title = "unknown";
	}
	operator int() const //���� ������
	{
		return isbn;
	}
	
	void display() {
		cout << isbn << ":" << title << endl;
	}
};

bool check(int isbn) {
	cout << isbn << endl;
	return true;
}

int main()
{
	Book b1 = 998765;
	b1.display();
	int isbn = b1;
	cout << isbn << endl;
	check(b1);
}