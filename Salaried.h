//CPP RHD Proj 5
#include<string>
#include <iostream>
#include "Employee.h"
using namespace std;


class Salaried : public Employee {

  private: 
    double weeklySal;

  public:
    Salaried(string lname, string fname);
    Salaried(string lname, string fname, double sal);

    void setSal(double nsal);

    double getSal();

    void displayEmp() const override;

    void displaySal();

    int weeklyEarnings() const override;
};
