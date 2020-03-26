//CPP RHD Proj 5
#include<string>
#include <iostream>
#include "Salaried.h"
using namespace std;

Salaried::Salaried(string lname, string fname) {
  firstName = fname;
  lastName = lname;
  weeklySal = -1;
}
Salaried::Salaried(string lname, string fname, double sal) {
  firstName = fname;
  lastName = lname;
  weeklySal = sal;
}
void Salaried::setSal(double sal) {
  weeklySal = sal;
}
double Salaried::getSal() {
  return weeklySal;
}
//displayEmp() function outputs the all employee information that is stored
void Salaried::displayEmp() const  {
  cout << lastName << " , " << firstName << ", " << Employee::getIDNum();
  cout << ", salary $" << weeklySal << endl;
}
//The displaySal() function outputs the employee name, id and weekly salary
void Salaried::displaySal() {
  cout << lastName << ", " << firstName << ", " << Employee::getIDNum() << ", salary $" << weeklySal;
}
int Salaried::weeklyEarnings() const {
  return weeklySal ;
}