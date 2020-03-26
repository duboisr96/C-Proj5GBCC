#ifndef EMPLOYEE_H
#define EMPLOYEE_H

//CPP RHD Proj 5
#include<string>
#include <iostream>
using namespace std;

class Employee 
{
protected:
  string lastName;

  string firstName;

private:
  int idNum;

public:
  Employee();   //default values assigned to all variables
  Employee(int idNum, string lname, string fname);

  void setLName(string);

  void setFName(string) ;

  void setIDNum(int);

  string getLName();

  string getFName();

  int getIDNum() const ;

  void displayName() ;

  virtual void displayEmp() const;

  virtual int weeklyEarnings() const = 0;
};
#endif