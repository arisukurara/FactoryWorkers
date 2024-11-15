// FactoryWorkers.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "ProductionWorker.h"
#include "ShiftSupervisor.h"
#include "TeamLeader.h"

int main()
{

    // Production Workers
    cout << "Production Worker:" << endl << endl;

    ProductionWorker worker1("Paul Jones", "12345", "10/28/2024", 1, 20.25);
    worker1.displayInfo();
    cout << endl;

    ProductionWorker worker2("Harriet Smith", "54321", "6/15/2024", 2, 25.50);
    worker2.displayInfo();
    cout << endl;

    // Shift Supervisors
    cout << "Shift Supervisor" << endl << endl;

    ShiftSupervisor supervisor("Elmer Velasquez", "100325", "1/17/2024", 70000.00, 1000.00);
    supervisor.displayInfo();
    cout << endl;

    // Team Leaders
    cout << "Team Leader" << endl << endl;

    TeamLeader teamleader("Mike Rogers", "64327", "2/7/2024", 2, 25, 150, 20, 10);
    teamleader.displayInfo();
    cout << endl;
}

