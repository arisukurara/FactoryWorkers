#pragma once
#include "Employee.h"
#include <iomanip>

class ProductionWorker : public Employee {
private:
	int shift;
	double payRate;
public:
	// Preconditions:
    //   nm, id, hd are non-empty strings
    //   shft must be int representing shift (1=day, 2=night)
    //   pr must be double representing hourly pay rate
    // Postconditions:
    //   a ProductionWorker object is created with the entered values
    //   base class Employee members are initialized
    //   shift and payRate are set to the entered values or the default
	ProductionWorker(string nm = "", string id = "", string hd = "", int shft = 1, double pr = 11.50);

    // Preconditions: None
    // Postconditions:
    //   returns the current shift as a string ("Day" or "Night")
	string getShift() const;

    // Preconditions: None
    // Postconditions:
    //   returns the current hourly pay rate value
	double getPayRate() const;

    // Preconditions: None
    // Postconditions:
    //   displays all ProductionWorker information to standard output
    //   first displays Employee information
    //   then displays shift and pay rate information
	void displayInfo() const;
};

