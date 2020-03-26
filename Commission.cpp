//CPP RHD Proj 5
#include<string>
#include <iostream>
#include "Commission.h"
using namespace std;

Commission::Commission(string lname, string fname) {
  lastName = lname;
  firstName = fname;
  basesalary = -1;
  comAmount = 0;
}
Commission::Commission(string lname, string fname, double bsal, double com) {
  lastName = lname;
  firstName = fname;
  basesalary = bsal;
  comAmount = com;
}
void Commission::setBase(double npay) {
  basesalary = npay;
}
void Commission::setCom(double nhr) {
  comAmount = nhr;
}

double Commission::getBase() {
  return basesalary;
}

double Commission::getCom() {
  return comAmount;
}

void Commission::displayBase() {
  cout << lastName << ", " << firstName << ", " << Employee::getIDNum() << ", $" << basesalary << ", + $" << comAmount;
}

void Commission::displayEmp() const {
  cout << lastName << " , " << firstName << ", " << Employee::getIDNum();
  cout << ", base: $" << basesalary << " + commission: $" << comAmount << endl;
}

int Commission::weeklyEarnings() const  {
   return basesalary + comAmount ;
}