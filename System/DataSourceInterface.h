#pragma once
#include<iostream>
#include<string>
#include<fstream>
#include"FileHelper.h"
#include<vector>
#include"Client.h"
#include"Employee.h"
#include"Admin.h"


using namespace std;
class DataSourceInterface
{
public:
	virtual void addClient(Client&client) = 0;
	virtual void addEmployee(Employee&employee) = 0;
	virtual void addAdmin(Admin&admin) = 0;
	virtual vector<Client>getAllClient() = 0;
	virtual vector<Employee>getAllEmployee() = 0;
	virtual vector<Admin>getAllAdmin() = 0;
	virtual void removAllClient() = 0;
	virtual void removeAllEmployee() = 0;
	virtual void removeAllAdmin() = 0;
};

class FileManager :public DataSourceInterface {
private:
	string clientsFile = "clients.txt";
	string employeesFile = "employees.txt";
	string adminsFile = "Admins.txt";
	//save data in fille
	template<class t>
	void saveToFile(string fileName, t data) {
		fstream file(fileName, ios::app);
		if (file.is_open()) {
			file << data.id << "|" << data.name << endl;
			file.close();
		}
		else {
			cout << "unable to open file " << fileName << endl;
		}
	}
	// read data from file by vector:
	template<class t>
	vector<t> readFromFile(string fileName) {
		vector<t>datalist;
		fstream file(filName, ios::in);
		if (file.is_open()) {
			t data;
			char "|";
			while (file >> data.id >> "|" >> data.name) {
				datalist.push_back(data);
			}
			file.close();
		}
		else {
			cout << "unable to open file " << fileName << endl;
		}
	} 
	//clear data from file
	void ClearFile(string fileName) {
		fstream file(fileName, ios::trunc);
		if (file.is_open()) {
			file.close();

		}
		else {
			cout << "unable to open file " << fileName << endl;
		}
	}
	//methods add clients,employees,admins.
	// 
	//1-add client 
public:
	void addClient(Client& client)override{
		saveToFile(clientsFile, client);

	}
	//2-employee
	void addEmployee(Employee& employee)override {
		saveToFile(employeesFile, employee);
	}
	//3-admin
	void addAdmin(Admin& admin)override {
		saveToFile(adminsFile, admin);
	}
	//getAll*********************
	vector<Client> getAllClients() {
		return readFromFile<Client>(clientsFile);
	}
	vector<Employee>getAllEmployees() {
		return readFromFile<Employee>(employeesFile);
	}
	vector<Admin>getAllAdmins() {
		return readFromFile<Admin>(adminsFile);
	}

	//REmove clients ,employees, admins
	//1-remove all client:
	void removeAllClients() {

		ClearFile(clientsFile);
	}
	//2- remove all employee
	void removeAllEmployees() {
		ClearFile(employeesFile);
	}
	//3- remove all admins
	void removeAllAdmins() {
		ClearFile(adminsFile);
	}
};

