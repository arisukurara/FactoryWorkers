#include "Employee.h"

Employee::Employee(string nm, string id, string hd) {
	name = nm;
	IDNumber = id;
	hireDate = hd;
}

string Employee::getName() const {
	return name;
}

string Employee::getIDNumber() const {
	return IDNumber;
}

string Employee::getHireDate() const {
	return hireDate;
}

void Employee::displayInfo() const {
	cout << "Name: " << name << endl;
	cout << "Employee Number: " << IDNumber << endl;
	cout << "Hire Date: " << hireDate << endl;
}