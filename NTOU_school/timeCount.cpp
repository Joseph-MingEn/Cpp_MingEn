#include <iostream>
#include <ctime>

using namespace std;

int main() {
    clock_t starttime = clock();
    for (int i = 0; i < 1000000; ++i);
    clock_t endtime = clock();
    cout << "Time: " << (double)(endtime - starttime) / CLOCKS_PER_SEC << " seconds" << endl;
    return 0;
}