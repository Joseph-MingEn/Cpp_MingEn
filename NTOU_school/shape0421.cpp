#include <iostream>
using namespace std;

class Shape
{
public:
	Shape(int i = 0, int j = 0) {	x = i;	y = j;	}
	double getX() {
		return x;
	}
	double getY() {
		return y;
	}

private:
	int x, y;
};

//Shape::Shape(int i = 0, int j = 0) {
//	x = i;
//	y = j;
//}

class Circle : public Shape { //繼承Shape
public:
	Circle(int, int, int);

	double getR() {
		return r;
	}


private:
	int r;
};

Circle::Circle(int i = 0, int j = 0, int rad = 0) : Shape(i, j) {
	r = rad;
}



int main() {
	Circle C1(1, 1, 9);
	cout << "r = " << C1.getR() << endl;
	cout << "x = " << C1.getX() << endl;
	cout << "y = " << C1.getY() << endl;
}

