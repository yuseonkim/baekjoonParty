#include <iostream>
#include <string>
using namespace std;

//일반적인 경우
// class Company {
//private:
//	int sales, profit;
//	friend void sub(Company& c);
//public:
//	Company():sales(0), profit(0){}
//};
//void sub(Company& c) {
//	cout << c.profit << endl;
//}
//
//int main()
//{
//	Company c1;
//	sub(c1);
//	return 0;
//}

//두 객체를 비교
//class Date
//{
//	friend bool equals(Date d1, Date d2);
//private:
//	int year, month, day;
//public:
//	Date(int y, int m, int d)
//	{
//		year = y;
//		month = m;
//		day = d;
//	}
//};
//bool equals(Date d1, Date d2) //프렌드 함수
//{
//	return d1.year == d2.year && d1.month == d2.month && d1.day == d2.day;
//}
//
//int main()
//{
//	Date d1(1960, 5, 23), d2(2002, 3, 11);
//	cout << equals(d1, d2) << endl;
//}

//두 객체를 연산을 하는 경우
class Complex {
public:
	friend Complex add(Complex a1, Complex a2);
	Complex(double r, double i) { re = r;im = i; }
	Complex(double r) { re = r; im = 0; }
	Complex() { re = im = 0; }
	void Output() {
		cout << re << " + " << im << "i" << endl;
	}
private:
	double re, im;
};

Complex add(Complex a1, Complex a2)
{
	return Complex(a1.re + a2.re, a1.im + a2.im);
}

int main()
{
	Complex c1(1, 2), c2(3, 4);
	Complex c3 = add(c1, c2);
	c3.Output();

	return 0;
}