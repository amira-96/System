
#pragma once
#include<iostream>
#include<fstream>
#include<vector>
#include<string>
#include"Client.h"
#include"Employee.h"
#include"Admin.h"
using namespace std;
class FileHelper
{
public:
	vector<Client>clients;
	vector<Employee>employees;
	vector<Admin>admins;
public:
	//method save last id//open filelast id:
	void savelast(string fileName, int id) {
		fstream file(fileName, ios::out);
		if (file.is_open()) {
			file << id;
			file.close();

		}
		else {
			cout << "unable to open file " << fileName << endl;
		}
	}
	//metohd to get last id:
	int getlast(string fileName) {
		fstream file(fileName, ios::out);
		int id = 0;
		if (file.is_open()) {
			file >> id;
			file.close();

		}
		else {
			cout << "unable to open file " << fileName << endl;
		}
		return id;
	}

	//method save client
	static void saveClient(Client client) {
		fstream file("clients.h", ios::app);
		if (file.is_open()) {
			file<<client.setId<<"|"<<client.
		}

	}
	void saveEmployee(string fileName, string lastIdFile, Employee e) {
		int lastId = getlast(lastIdFile);
		lastId + 1;
		employees.push_back(e);
		savelast(lastIdFile);
	}
	//e:: getclient //use foreach /auto
	void getClients() {
		for (auto& client : clients) {
			cout << "Client ID:" << client.getId << "Name: " << client.getName << endl;
		}
	}
	//f::getemployee::
	void getEmployees() {
		for (auto& employee : employees) {
			cout << "Employee ID:"<<<<"Name:"<<<<endl;
		}

	}
	void getAdmins() {
		for (auto& admin : admins) {

		}
	}



	//h::method clearfile
	void ClearFile(string fileName, string lastIdFile) {
		fstream file(fileName, ios::trunc);
		if (file.is_open()) {
			file.close();

		}
		else {
			cout << "unable to open file " << fileName << endl;
		}
		savelast(lastIdFile, 0);
	}


};
