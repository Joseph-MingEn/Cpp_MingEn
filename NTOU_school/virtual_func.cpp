#include <iostream>
using namespace std;
class Point {
public:
	double x;
	double y;
};

class Shape {
public:
	virtual double area() = 0;

};

class Circle : virtual public Shape {
public:
	Circle(double x = 0, double y = 0, double rad = 0) {
		p.x = x;
		p.y = y;
		r = rad;
	}

	double area() {
		return r*r * 3.14159;
	}

private:
	Point p;
	double r;
};

class Rectangle : virtual public Shape {
public:
	Rectangle(double x = 0, double y = 0, double x1 = 0, double y1 = 0) {
		p1.x = x;
		p1.y = y;
		p2.x = x1;
		p2.y = y1;
	}

	double area() {
		return abs((p1.x - p2.x) * (p1.y - p2.y));
	}

private:
	Point p1, p2;
};

int main() {
	Shape* sp[4] = {
		new Circle(),
		new Circle(1,1,5),
		new Rectangle(),
		new Rectangle(1, 2, 3, 4)
	};

	for(int i = 0; i < 4; i++) {
		cout << sp[i]->area() << endl;
	}

}
