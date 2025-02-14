#pragma once
#include<iostream>
#include<string>
#include<fstream>
#include"Employee.h"

using namespace std;

class Admin :public Employee {
public:
	double salary;
	vector<Employee>employees;
public:
	Admin() :Employee() {

	}
	Admin(int id, string name, string password, double salary) :Employee(id, name, password, salary) {

	}
	
	void addEmployee(Employee&employee) {
		employees.push_back(employee);
	}

	Employee* searchEmployee(int id) {
		for (auto& employee : employees) {
			if (employee.id == id) {
				return&employee;
			}
		}
		return nullptr;
	}
	void editEmployee(int id, string name, string password, double salary) {
		Employee* employee = searchEmployee(id);
		if (employee) {
			employee->name = name;
			employee->getPassword = password;
		}
	}
	
};


