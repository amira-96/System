// System.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<string>
#include<fstream>
#include"Person.h"
#include"Client.h"
#include"Employee.h"
#include"Admin.h"
#include"FileHelper.h"
#include"DataSourceInterface.h"

using namespace std;
int main()
{
	FileManager filemanager;
	Client client1(1, "Mohamed", "98655599", 3000);
		//client2(2, "Mostafa", "666655553", 4000),
		//client3(3, "Batoul", "6668980006", 3500);
	//string s;
	//
	//fstream file(FileName, ios::out);
	//file << client1.getId() << "|" << client1.getName() << "|" << client1.getPassword() << "|" << client1.getBalance() << endl;
	//file.close();
	//**********************//
	


	
	//string FileName = "employees.txt";
	Employee employee1(45, "hasan", "989898989", 7000);
		//employee2(46, "Esraa", "7774443213", 6000);
	employee1.displayInfo();

	
	string FileName = "Admins.txt";
	Admin admin1(10, "Ahmed", "7776665554", 9000);
	admin1.displayInfo();
	string s;

	fstream file(FileName, ios::out);
	file << admin1.getId() << "|" << admin1.getName() << "|" << admin1.getPassword() << "|" << admin1.getSalary() << endl;
	file.close();
	
}

