#pragma once
#include<iostream>
#include<string>
#include"Validation.h"

using namespace std;
class Person
{
protected:
	int id;
	string name, password;

public:
	Person() {
	id = 0;
	name = "";
	password = "";
	}
	Person(int id, string name, string password) {
		setId(id);
		setName(name);
		setPassword(password);

	}
	//setters:
	void setId(int id) {

		this->id = id;

	}

	void setName(string name) {
		if (Validation::validateName(name))
			this->name = name;
		else
			cout << "Invalid name " << endl;
	}

	void setPassword(string password) {
		if (Validation::validatePassword(password))
			this->password = password;
		else
			cout << "Invalid password " << endl;

	}

	//getters:
	int getId() {
		return this->id;
	}
	string getName() {
		return this->name;

	}
	string getPassword() {
		return this->password;
	}

	//methods:

	void displayInfo() {
		cout << "Id / " << id << endl;
		cout << "Name / " << name << endl;
		cout << "Password / " << password << endl;

	}
	//DES:
	~Person() {

	}
};



