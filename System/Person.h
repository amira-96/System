#pragma once
#include<iostream>
#include<string>
#include"Validation.h"

using namespace std;
class Person
{
private:
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
	void setId(int newid) {

		this->id = newid;

	}

	void setName(string newname) {
		if (Validation::validateName(name))
			this->name = newname;
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
	int getId()const {
		return this->id;
	}
	string getName() const{
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



