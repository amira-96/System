#pragma once
#include<iostream>
#include<string>
#include<vector>
#include"Person.h"
#include"DataSourceInterface.h"
using namespace std;
class Employee:public Person
{
private:
	double salary;
	vector<Client>clients;
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

	void addClient(Client& client) {
		clients.push_back(client);
	}
	Client* searchClient(int id) {
		for (auto& client : clients) {
			if (client.setId == id) {
				return &client;
			}
		}
		return nullptr;
	}
	void listClients() {
		for (auto& client : clients) {
			cout << "ID" << client.setId << ;
		}
		void editClient(int id, string name, string password, double balance) {
			Client* Client = searchClient(id);
			if (Client) {
				client->name = name;
				client->password = password;
				client->balance = balance;
			}
			else {
				cout << "client not found" << endl;
			}
		}
	~Employee() {
	}

};


