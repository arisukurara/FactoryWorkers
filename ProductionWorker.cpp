#include "ProductionWorker.h"

ProductionWorker::ProductionWorker(string nm, string id, string hd, int shft, double pr) : Employee(nm, id, hd) {
	shift = shft;
	payRate = pr;
}

string ProductionWorker::getShift() const {
	if (shift == 1) {
		return "Day";
	}
	else {
		return "Night";
	}
}

double ProductionWorker::getPayRate() const {
	return payRate;
}

void ProductionWorker::displayInfo() const {
	Employee::displayInfo();
	cout << "Shift: " << getShift() << endl;
	cout << "Hourly Pay Rate: $" << fixed << setprecision(2) << payRate << endl;
}