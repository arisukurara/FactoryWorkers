#include "ShiftSupervisor.h"

ShiftSupervisor::ShiftSupervisor(string nm, string id, string hd, double slry, double bns) : Employee(nm, id, hd) {
	salary = slry;
	bonus = bns;
}

double ShiftSupervisor::getSalary() const {
	return salary;
}

double ShiftSupervisor::getBonus() const {
	return bonus;
}

void ShiftSupervisor::displayInfo() const {
	Employee::displayInfo();
	cout << "Annual Salary: $" << fixed << setprecision(2) << salary << endl;
	cout << "Annual Bonus: $" << fixed << setprecision(2) << bonus << endl;
}