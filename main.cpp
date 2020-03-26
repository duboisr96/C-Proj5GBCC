//CPP RHD Proj 5
#include<string>
#include <iostream>
#include <vector>
#include "Hourly.h" // hour * rate | first name | last name | ID
#include "Salaried.h" //flat salary | first name | last name | ID
#include "Commission.h" // flat + commission | first name | last name | ID
using namespace std;



int main() {
  vector<Employee*> empList;
  int tempId;
  string tempF;
  string tempL;
  double tempS;
  double tempT;
  bool loop = true;
  int choice;
  int emptype;

  while (loop) {

    cout << "\nSelect choice\n\
            1) Enter new employee \n\
            2) Print employee list\n\
            3) Search by employee ID\n\
            4) Print by last name\n\
            5) Print Employees who make more than 1000 a week\n\
            6) Quit\n>";

    cin >> choice;

    switch(choice) {

      case 1: // create 3 employee types
        cout << "Employee type? \n     1) Salaried\n     2) Hourly\n     3) Commissioned\n>";
        cin >> emptype;
        switch(emptype) {
          case 1: //salaried

            cout << "Enter new Employee ID number\n>";
            cin >> tempId;
            cout << "Enter first name of new employee\n>";
            cin >> tempF;
            cout << "Enter last name of new employee\n>";
            cin >> tempL;
            cout << "Enter salary of new employee\n>";
            cin >> tempS;
            empList.push_back(new Salaried(tempL, tempF, tempS));//string lname, string fname, double sal
            (*empList.back()).setIDNum(tempId);
            
            break;
          case 2: //hourly
            cout << "Enter new Employee ID number\n>";
            cin >> tempId;
            cout << "Enter first name of new employee\n>";
            cin >> tempF;
            cout << "Enter last name of new employee\n>";
            cin >> tempL;
            cout << "Enter hourly rate of new employee\n>";
            cin >> tempS;
            cout << "Hours worked?" << endl;
            cin >> tempT;
            empList.push_back((Employee*)new Hourly(tempL, tempF, tempS, tempT));//string lname, string fname, double rate
            (*empList.back()).setIDNum(tempId);
            
            //empList.back()->setHrs(tempS);
            break;
          case 3: //Commissioned
            cout << "Enter new Employee ID number\n>";
            cin >> tempId;
            cout << "Enter first name of new employee\n>";
            cin >> tempF;
            cout << "Enter last name of new employee\n>";
            cin >> tempL;
            cout << "Enter base pay of new employee\n>";
            cin >> tempS;
            cout << "Commission earned?" << endl;
            cin >> tempT;
            empList.push_back(new Commission(tempL, tempF, tempS, tempT));//string lname, string fname, double rate
            (*empList.back()).setIDNum(tempId);\
            break;
        }
        break;
      
      case 2: //print all NEW VERSION
        cout << endl <<"Salaried workers" << endl;
        for (int i = 0; i < empList.size(); i++) {
          (*(empList[i])).displayEmp();
        }
        
        break;
      case 3: //search by id
        cout << "ID to search by\n>";
        cin >> tempId;

        for (int i = 0; i < empList.size(); i++) {
          if ((*(empList[i])).getIDNum() == tempId) {
            cout << "Employee found:" << endl;
            (*(empList[i])).displayEmp();
            choice = -1; //this is for a check if we found the employee later
            break;
          }
        }
        if (choice != -1) {
          cout << endl << "Employee not found" << endl;
        
        }
        break;
      case 4: //search by last name NEW VERSION
        cout << "Name to output by\n>";
        cin >> tempL;

        for (int i = 0; i < empList.size(); i++) {
            if ((*(empList[i])).getLName() == tempL) {
              cout << "Employee found:" << endl;
              (*(empList[i])).displayEmp();
              choice = -1;//this is for a check if we found the employee later
              break;
            }
          }

        if (choice != -1) {
          cout << "Employee not found" << endl;
        }
        break;
      
      case 5: //print names and rates of low min wage
        for (int i = 0; i < empList.size(); i++) {
          if ((*(empList[i])).weeklyEarnings() >= 1000 ) {
            (*(empList[i])).displayEmp();
          }
        }
        break;

      case 6: //stop loop
        loop = false;
        break;
    }
  }
}