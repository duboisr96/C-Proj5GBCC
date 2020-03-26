//CPP RHD Proj 5
#include<string>
#include <iostream>
#include "Hourly.h"
using namespace std;

Hourly::Hourly(string lname, string fname) {
  lastName = lname;
  firstName = fname;
  hrsworked = 0;
  payperhr = -1;
}

Hourly::Hourly(string lname, string fname, double newpay, double hrs) {
  lastName = lname;
  firstName = fname;
  hrsworked = hrs;
  payperhr = newpay;
}
void Hourly::setHrs(double nhr) {
  hrsworked = nhr;
}
void Hourly::setPay(double hrs) {
  hrsworked = hrs;
}
double Hourly::getHrs() {
  return hrsworked;
}
double Hourly::getPay() {
  return payperhr;
}
void Hourly::displayEmp() const {
  cout << lastName << " , " << firstName << ", " << Employee::getIDNum();
  cout << ", $" << payperhr << " an hour, hours:" << hrsworked << endl;
}
void Hourly::displayHrly() {
  cout << lastName << ", " << firstName << ", " << Employee::getIDNum() << ", $" << payperhr << ", hours: " << hrsworked;
}

int Hourly::weeklyEarnings() const {
  return  hrsworked*payperhr ;
}