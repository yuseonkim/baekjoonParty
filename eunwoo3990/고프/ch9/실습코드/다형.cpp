#include <iostream>
using namespace std;

class Shape {
protected:
	int x, y;

public:
	void setOrigin(int x, int y) {
		this->x = x;
		this->y = y;
	}
	void draw() {
		cout << "Shape Draw" << endl;
	}
};
class Rectangle : public Shape {
private:
	int width, height;

public:
	void setWidth(int w) { width = w; }
	void setHeight(int h) { height = h; }
	void draw() { cout << "Rectangle Draw"; } //재정의
};
class Circle :public Shape {
private:
	int radius;
public:
	void setRadius(int r) { radius = r;}
	void draw() { cout << "Circle draw" << endl; }
};

void move(Shape& s, int sx, int sy)
{
	s.setOrigin(sx, sy);
}

int main()
{
	/*Shape* ps = new Rectangle();
	ps->setOrigin(10, 10);
	ps->draw();
	((Rectangle*)ps)->setWidth(100);
	delete ps;*/
	Rectangle r;
	move(r);

	Circle c;
	move(c);

	return 0;
	/*
	상향 형변환
	Dog dog;
	Animal* pa;
	pa = &dog;
	
	하향 형변환
	baseClass *pd = new DerivedClass();
	DerivedClass *pd = (DerivedClass *)pd
	*/
}
