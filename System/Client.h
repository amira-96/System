#pragma once
#include<iostream>
#include<string>
#include<fstream>
#include"Person.h"
using namespace std;

class Client :public Person {
	private:

		double balance;
	public:
		Client():Person() {
			this->balance = 0;
		}

		Client(int id, string name, string password, double balance) :Person(id, name, password) {
			setBalance(balance);
		}
		//Setters:
		void setBalance(double balance) {

			this->balance = balance;
		}
		//getter:
		double getBalance() {
			return this->balance;
		}

		//*Method:*/
		// 
		//1 login system by id && password:
		/*bool loginSystem(string id, string password) {
			if (id == id && password == password) {
				return true;
			}
			else {
				return false;
			}
		}*/


		//2  client deposit amount 
		double deposit(double amount) {
			balance += amount;

			return balance;
		}
		//3 client  withdraw
		double withdraw(double amount) {
			if (amount <= balance)
				balance -= amount;
			else
				cout << "Amount exceeded balance " << endl;
			return balance;

		}
		//4 client check his balance
		void checkBalance() {
			cout << "Balance : " << balance << endl;

		}


		//5 client transfer money to another client:

		double transferto(Client& recipient, double amount) {
			if (amount <= balance) {
				balance -= amount;
				recipient.deposit(amount);
			}
			else
				cout << "Amount exceeded balance " << endl;

			return balance;

		}
	
	
		void displayInfo() {
			Person::displayInfo();

			cout << "Client balance : " << balance << endl;
			cout << "***********************" << endl;

		}
		~Client() {

		}
	};



