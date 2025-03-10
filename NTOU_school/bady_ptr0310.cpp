#include<iostream>
using namespace std;

int main() {
    int *ptr_age, age = 18;
    float *ptr_weight, weight = 60.5;
    char *ptr_bloodtype, bloodtype = 'A';
    ptr_age = &age;
    ptr_weight = &weight;
    ptr_bloodtype = &bloodtype;

    cout << "age: " << age << ", *ptr_age: " << *ptr_age << endl;
    cout << "weight: " << weight << ", *ptr_weight: " << *ptr_weight << endl;
    cout << "bloodtype: " << bloodtype << ", *ptr_bloodtype: " << *ptr_bloodtype << endl;
    return 0;
}