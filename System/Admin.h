#pragma once
#include<iostream>
#include<string>
#include"Employee.h"

using namespace std;

class Admin :public Employee {
private:
	double salary;
public:
	Admin() :Employee() {

	}
	Admin(int id, string name, string password, double salary) :Employee(id, name, password, salary) {

	}
};


