#pragma once
#include<iostream>
#include<string>
#include<fstream>
#include"Employee.h"

using namespace std;

class Admin :public Employee {
public:
	double salary;
public:
	Admin() :Employee() {

	}
	Admin(int id, string name, string password, double salary) :Employee(id, name, password, salary) {

	}



	/*void saveToFile() {
		ofstream Admin("Admin.txt");
			if (Admin.is_open()) {
				Admin << " AdminID : " << id << endl;

				Admin << " Adminname : " << name << endl;
				Admin << " Admin password : " << password << endl;
				Admin << " Admin balance : " << salary << endl;
				Admin << "******************" << endl;
				Admin.close();
			}
		
		else {
			cout << "unable to open file to save " << endl;

		}*/

	
};


