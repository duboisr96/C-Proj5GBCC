//CPP RHD Proj 5
#include<string>
#include <iostream>
#include "Employee.h"
using namespace std;

class Commission:public Employee {

  private:
    double basesalary;
    double comAmount;
  
  public:
    Commission(string lname, string fname);
    Commission(string lname, string fname, double bsal, double com);

    void setBase(double npay);

    void setCom(double nhr);

    double getBase();

    double getCom();

    void displayBase();

    void displayEmp() const override;

    int weeklyEarnings() const override;
};