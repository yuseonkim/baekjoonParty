#include <iostream>
using namespace std;

class Vector
{
	friend bool operator==(const Vector &v1, const Vector &v2);
	friend bool operator!=(const Vector &v1, const Vector& v2);
	friend ostream& operator<<(ostream& os, const Vector& v);
	friend istream& operator>>(istream& in, Vector& v);
private:
	double x, y;
public:
	Vector(double xvalue = 0.0, double yvalue = 0.0) : x(xvalue), y(yvalue) {}
	void display() {
		cout << "(" << x << "," << y << ")" << endl;
	}
	Vector& operator=(const Vector& v2) {
		this->x = v2.x;
		this->y = v2.y;
		return *this;
	}
	Vector& operator++() {
		x = x + 1;
		y = y + 1;
		return *this;
	}
	const Vector operator++(int) {
		Vector saveObj = *this;
		x++;
		y++;
		return saveObj;
	}
};
bool operator==(const Vector& v1, const Vector& v2) {
	return v1.x == v2.x && v1.y == v2.y;
}
bool operator!=(const Vector& v1, const Vector& v2) {
	return !(v1 == v2);
}
ostream& operator<<(ostream& os, const Vector& v) {
	os << "(" << v.x << "," << v.y << ")" << endl;
	return os;
}
istream& operator>>(istream& in, Vector& v) {
	in >> v.x >> v.y;
	if (!in)
		v = Vector(0, 0);
	return in;
}
int main()
{
	/*Vector v1(1, 2), v2(1, 2), v3;


	cout.setf(cout.boolalpha);
	cout << (v1 == v2) << endl;
	cout << (v1 != v2) << endl;
	cout << v1 << v2 << v3 << endl;
	*/
	Vector v1(1, 2), v2(2, 3);
	v1 = v2;
	cout << v1 << endl;
	++v1;
	cout << v1 << endl;
	++(++v1);
	cout << v1 << endl;
	v1++;
	cout << v1 << endl;
	return 0;
}