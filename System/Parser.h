#pragma once
#include<iostream>
#include<string>
#include<fstream>
#include<vector>
#include<sstream>
#include"Client.h"
#include"Employee.h"
#include"Admin.h"

using namespace std;
class Parser
{   
public:
	static vector <string> split(const string& line) {
		vector<string> signs;
		string sign;
		 stringstream ss(line);
		while (getline(ss, sign, '|')) {
			signs.push_back(sign);

		}
		return signs;
	}
	static Client parseToClient(string line) {
		vector<string> signs = split(line);
		Client client;
		client.setId(stoi(signs[0]));
		client.setName(signs[1]);
		client.setPassword(signs[2]);
		client.setBalance(stod(signs[3]));
		return client;
	}
	static Employee parseToEmployee(string line) {
		vector<string> signs = split(line);
		Employee employee;
		employee.setId(stoi(signs[0]));
		employee.setName(signs[1]);
		employee.setPassword(signs[2]);
		employee.setSalary(stod(signs[3]));
		return employee;
	}
	static Admin parseToAdmin(string line) {
		vector<string> signs = split(line);
		Admin admin;
		admin.setId(stoi(signs[0]));
		admin.setName(signs[1]);
		admin.setPassword(signs[2]);
		admin.setSalary(stod(signs[3]));
		return admin;
	}


};



