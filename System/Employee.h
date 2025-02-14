#pragma once
#include<iostream>
#include<string>
#include<fstream>
#include"Person.h"
using namespace std;
class Employee:public Person
{
private:
	double salary;
public:
	Employee() :Person() {

		this->salary = 0;
	}
	Employee(int id, string name, string password, double salary) :Person(id, name, password) {
		setSalary(salary);
	}
	//setter
	void setSalary(double salary) {
		if (Validation::validateSalary(salary))

			this->salary = salary;
		else
			cout << "Invalid salary" << endl;
	}
	//getter
	double getSalary() {
		return this->salary;
	}
	void displayInfo() {
		Person::displayInfo();
		cout << "Employee Salary : " << salary << endl;
		cout << "******************" << endl;
	}

	~Employee() {
	}

};


