#pragma once
#include <iostream>
#include <string>
using namespace std;

class Pet {
protected:
	string name;
	int age;
	string type;

public:
	Pet(string Name, int age, string type) :
		name(name), age(age), type(type) {

		string getName() {
			return name;
		}
		int getAge({
			return age;
			}
			string getType({
					return type;
				}
	}

