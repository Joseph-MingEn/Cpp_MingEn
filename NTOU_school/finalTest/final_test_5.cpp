#include <iostream>
using namespace std;

template <class T>
int min(T data[], int size) {
    int index = 0;
    for(int i = 0; i < size; i++ ) {
        if(data[i] < data[index]) {
            index = i;
        }
    }
    return index;
}

int main() {
    int D[] = {123,1312,1231};
    int minOfAll = min<int>(D, sizeof(D) / sizeof(int));
    cout << D[minOfAll] << endl;
    char D2[] = {'a','s','q','w','q','w','b'};
    int minOfAll2 = min<char>(D2, sizeof(D2) / sizeof(char));
    cout << D2[minOfAll2] << endl;
}