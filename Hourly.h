//CPP RHD Proj 5
#include<string>
#include <iostream>
#include "Employee.h"
using namespace std;

class Hourly : public Employee {

  private:

    double payperhr;
    double hrsworked;
  
  public:

    Hourly(string lname, string fname);
    Hourly(string lnamenhj, string fname, double newpay, double hrs);

    void setPay(double);
    void setHrs(double nhr);

    double getPay();
    double getHrs();

    void displayHrly();
    void displayEmp() const override;
    int weeklyEarnings() const override;
};