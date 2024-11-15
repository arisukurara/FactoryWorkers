#pragma once
#include <iostream>

using namespace std;

class Employee
{
private:
	string name;
	string IDNumber;
	string hireDate;
public:
	// Preconditions:
	//   nm, id, hd are non-empty strings
	// Postconditions:
	//   an Employee object is created with the entered values
	//   name, IDNumber, and hireDate are set to entered values or defaults
	//   defaults if not provided: name="NAME", id="999999", hd="1/1/1900"

	Employee(string nm = "NAME", string id = "999999", string hd = "1/1/1900");

	// Preconditions: None
	// Postconditions:
	//   returns the current name value

	string getName() const;

	// Preconditions: None
	// Postconditions:
	//   returns the current IDNumber value

	string getIDNumber() const;

	// Preconditions: None
	// Postconditions:
	//   returns the current hireDate value

	string getHireDate() const;

	// Preconditions: None
	// Postconditions:
	//   displays all Employee information to standard output
	//   displays name, ID number, and hire date

	void displayInfo() const;
};

