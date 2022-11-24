#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

class String {
	char* s;
public:
	String(char* p) {
		cout << "String() 持失切" << endl;
		s = new char[strlen(p) + 1];
		strcpy(s, p);
	}
	virtual ~String() {
		cout << "String 社瑚切" << endl;
		delete[] s;
	}
};
class MyString : public String {
	char* header;
public:
	MyString(char* h, char* p) :String(p) {
		cout << "MyStirng() 持失切" << endl;
		header = new char[strlen(h) + 1];
		strcpy(header, h);
	}
	~MyString() {
		cout << "MyString() 社瑚切" << endl;
		delete[] header;
	}
};

int main(void) 
{
	String* p = new MyString("-----", "Hello world");
	delete p;

	return 0;
}