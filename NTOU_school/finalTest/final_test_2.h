#include <iostream>
#include <string>
using namespace std;

enum Gender {male, female};
class person {
private:
    string name;
    Gender sex;
    int age;
    string school;
public:
    person(string n, Gender s, int a, string g) {
        name = n;
        sex = s;
        age = a;
        school = g;

    }

    void show() {
        cout << "Name: " << name << ", Sex: " << sex << ", Age: " << age << ", School: " << school << endl;
    }
};
