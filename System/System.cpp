// System.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<string>
#include"Person.h"
#include"Client.h"
#include"Employee.h"
#include"Admin.h"
using namespace std;
int main()
{
	/*std::ofstream outfile("client.txt");*/
	Client client = Client::lodefromfile("client.txt",1);
	Client client1(1, "Mohamed", "98655599", 3000),
		client2(2, "Mostafa", "666655553", 4000);


	if (client.getId() != 0) {
		cout << "client found" << endl;
		client.displayInfo();
	}
	else {
		cout << "client not found" << endl;
	}
	client1.displayInfo();
	client1.checkBalance();
	client1.deposit(600);
	client2.transferto(client1, 500);
	client1.displayInfo();
	client2.displayInfo();
	/*client1.saveToFile(outfile);*/
	//*************************************
	/*std::ofstream outfile("Employee.txt");*/

	Employee emloyee1(45, "hasan", "989898989", 7000);
	emloyee1.displayInfo();
	
	Admin admin1(10, "Ahmed", "7776665554", 9000);
	admin1.displayInfo();
   
}

