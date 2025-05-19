#include <iostream>
using namespace std;

template<class T>
int min(T data[], int size) {
	int index = 0;
	for (int i = 0; i < size; i++) {
		if (data[i] < data[index]) {
			index = i;
		}
	}

	return index;
}
int main() {
	int D[] = { 5, 2, 6 };
	int minOfAll = min<int>(D, sizeof(D) / sizeof(int));	
	cout << minOfAll << endl;
	double D2[] = { 1.2222, 0.333 };
	minOfAll = min(D, sizeof(D) / sizeof(int));
	cout << minOfAll << endl;

}
