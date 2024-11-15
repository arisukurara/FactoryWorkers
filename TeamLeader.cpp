#include "TeamLeader.h"

TeamLeader::TeamLeader(string nm, string id, string hd, int shft, double pr, double bonus, int reqHours, int attHours)
    : ProductionWorker(nm, id, hd, shft, pr) 
{
    monthlyBonus = bonus;
    requiredTrainingHours = reqHours;
    attendedTrainingHours = attHours;
}

double TeamLeader::getMonthlyBonus() const {
    return monthlyBonus;
}

int TeamLeader::getRequiredTrainingHours() const {
    return requiredTrainingHours;
}

int TeamLeader::getAttendedTrainingHours() const {
    return attendedTrainingHours;
}

void TeamLeader::setMonthlyBonus(double bonus) {
    monthlyBonus = bonus;
}

void TeamLeader::setRequiredTrainingHours(int hours) {
    requiredTrainingHours = hours;
}

void TeamLeader::setAttendedTrainingHours(int hours) {
    attendedTrainingHours = hours;
}

void TeamLeader::displayInfo() const {
    ProductionWorker::displayInfo();

    cout << "Monthly Bonus: $" << fixed << setprecision(2) << monthlyBonus << endl;
    cout << "Required Training Hours: " << requiredTrainingHours << endl;
    cout << "Attended Training Hours: " << attendedTrainingHours << endl;
}