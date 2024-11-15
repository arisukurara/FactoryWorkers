#pragma once
#include "ProductionWorker.h"

class TeamLeader : public ProductionWorker
{
private:
    double monthlyBonus;
    int requiredTrainingHours;
    int attendedTrainingHours;

public:

    // Preconditions: 
    //   nm, id, hd are non-empty strings
    //   shft is 1 (day) or 2 (night)
    //   pr must be a double representing pay per hour
    //   bonus must be a double representing monthly bonus
    //   reqHours must be an int
    //   attHours must be an int
    // Postconditions:
    //   creates a TeamLeader object with the entered values
    //   initializes base class (ProductionWorker) members
    TeamLeader(string nm = "", string id = "", string hd = "",
        int shft = 1, double pr = 11.50,
        double bonus = 0.0, int reqHours = 0, int attHours = 0);

    // Preconditions: none
    // Postconditions: returns the current value without modifying it
    double getMonthlyBonus() const;
    int getRequiredTrainingHours() const;
    int getAttendedTrainingHours() const;

    // Preconditions: 
    //   bonus >= 0
    // Postconditions: 
    //   sets monthlyBonus to the new value
    void setMonthlyBonus(double bonus);

    // Preconditions: 
    //   hours >= 0
    // Postconditions: 
    //   sets requiredTrainingHours to the new value
    void setRequiredTrainingHours(int hours);

    // Preconditions: 
    //   hours >= 0
    // Postconditions: 
    //   sets attendedTrainingHours to the new value
    void setAttendedTrainingHours(int hours);

    // Preconditions: None
    // Postconditions: 
    //   displays all TeamLeader information
    //   first calls base class displayInfo()
    //   then adds TeamLeader-specific information
    void displayInfo() const;
};