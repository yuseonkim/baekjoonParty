#include <iostream>
using namespace std;

class Vector
{
	friend Vector operator*(Vector& v, double a);
	friend Vector operator*(double a, Vector& v);
private:
	double x, y;
public:
	Vector(double xvalue = 0.0, double yvalue = 0.0) : x(xvalue), y(yvalue) {}
	void display() {
		cout << "(" << x << "," << y << ")" << endl;
	}
};
Vector operator*(Vector& v, double a) {
	return Vector(a * v.x, a * v.y);
}
Vector operator*(double a, Vector& v) {
	return Vector(a * v.x, a * v.y);
}

int main()
{
	Vector v(1.0, 1.0);
	Vector w = v * 2;
	Vector z = 2 * v;
	w.display();
	z.display();
}