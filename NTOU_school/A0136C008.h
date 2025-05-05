#pragma once
#include<iostream>
#include<string>
using namespace std;

enum Gender {male, female};

class Person {
public:
	Person(string n, Gender s, int a, string g) {
		name = n;
		six = s;
		age = a;
		grade = g;
	}

	void show() {
		cout << name << ", " << six << ", " << age << ", " << grade;

	}
	
protected:
	string name;
	Gender six;
	int age;
	string grade;
};
