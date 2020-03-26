//CPP RHD Proj 5
#include<string>
#include <iostream>
#include "Employee.h"
using namespace std;

//default const
Employee::Employee() { 
  lastName = "YYYYY";
  firstName = "XXXX";
  idNum = 9999;
}

Employee::Employee(int idNum, string lname, string fname) {
  lastName = lname;
  firstName = fname;
  this->idNum = idNum;
}

void Employee::setLName(string lname) {
  lastName = lname;
}

void Employee::setFName(string fname) {
  firstName = fname;
}

void Employee::setIDNum(int num) {
  idNum = num;
}

string Employee::getFName() {
  return firstName;
}

string Employee::getLName() {
  return lastName;
}

int Employee::getIDNum() const {
  return idNum;
}

void Employee::displayName() {
  cout << lastName << " , " << idNum;
}

void Employee::displayEmp() const{
    cout << lastName << " , " << firstName << ", " << idNum;
}