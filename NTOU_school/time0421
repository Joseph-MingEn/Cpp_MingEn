#include <iostream>
using namespace std;

class Time
{
public:
	Time();
	Time(int);
	Time(int, int, int);

	void getTime() {
		cout << hr << ":" << min << ":" << sec << endl;
		
	}

private:
	int hr, min, sec;
};

Time::Time() {
	hr = 12;
	min = 0;
	sec = 0;
}
Time::Time(int h) {
	hr = (h >= 0 && h <= 23) ? h : 0;
	min = 0, sec = 0;
}

Time::Time(int h, int m, int s) {
	hr = (h >= 0 && h <= 23) ? h : 0;
	min = (m >= 0 && m <= 59) ? m : 0;
	sec = (s >= 0 && s <= 59) ? s : 0;
}
int main()
{
	Time* t1 = new Time();
	t1->getTime();
	Time t2(14);
	t2.getTime();
	Time t3(125, 6, 4);
	t3.getTime();

}

