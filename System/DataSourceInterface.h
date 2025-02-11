#pragma once
#include<iostream>
class DataSourceInterface
{
public:
	virtual void addClient() = 0;
	virtual void addEmployee() = 0;
	virtual void addAdmin() = 0;
	virtual void getAllClient() = 0;
	virtual void getAllEmployee() = 0;
	virtual void getAllAdmin() = 0;
	virtual void removAllClient() = 0;
	virtual void removeAllEmployee() = 0;
	virtual void removeAllAdmin() = 0;
};

