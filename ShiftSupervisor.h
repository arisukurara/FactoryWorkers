#pragma once
#include "Employee.h"
#include <iomanip>

class ShiftSupervisor : public Employee {
private:
	double salary;
	double bonus;
public:
	// Preconditions:
	//   nm, id, hd are non-empty strings
	//   slry must be double representing annual salary
	//   bns must be double representing annual bonus
	// Postconditions:
	//   a ShiftSupervisor object is created with the entered values
	//   base class Employee members are initialized
	//   salary and bonus are set to the entered values or the default
	ShiftSupervisor(string nm = "", string id = "", string hd = "", double slry = 50000, double bns = 1000);

	// Preconditions: None
	// Postconditions:
	//   returns the current annual salary value
	double getSalary() const;

	// Preconditions: None
	// Postconditions:
	//   returns the current annual bonus value
	double getBonus() const;

	// Preconditions: None
	// Postconditions:
	//   displays all ShiftSupervisor information to standard output
	//   first displays Employee information
	//   then displays salary and bonus information
	void displayInfo() const;
};

