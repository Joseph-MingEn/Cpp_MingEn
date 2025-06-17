#include <iostream>
using namespace std;

class point {
    public:
    double x, y;

};

class shape {
    public:
    virtual double area() = 0; // pure virtual function
};

class circle : virtual public shape {
    public:
    circle(double x = 0, double y = 0, int r = 0) {
        p.x = x;
        p.y = y;
        radius = r;
    }

    double area() {
        return 3.14159 * radius * radius;
    }

    void getData() {
        cout << "Circle at (" << p.x << ", " << p.y << ") with radius " << radius << endl;
    }
    private:
    int radius;
    point p;
};

int main() {
    shape* sp1 = new circle(1, 2, 3);
    cout << "Area: " << sp1->area() << endl;
}