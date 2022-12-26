#include <iostream>
#include <cstring>
#include <string>
using namespace std;
class Employee
{
    int e_no;
    char e_name[20], desg[20];
    float salary;

public:
    Employee()
    {
        e_no = 101;
        strcpy(e_name, "Default");
        strcpy(desg, "Abc");
        salary = 10000;
    }
    Employee(int eno, char ename[], char d[], float sal)
    {
        e_no = eno;
        strcpy(e_name, ename);
        strcpy(desg, d);
        salary = sal;
    }
    Employee(Employee &e1)
    {
        e_no = e1.e_no;
        strcpy(e_name, e1.e_name);
        strcpy(desg, e1.desg);
        salary = e1.salary;
    }

    void Display()
    {
        cout << "Employee Number:" << e_no << endl;
        cout << "Employee Name:" << e_name << endl;
        cout << "Designation:" << desg << endl;
        cout << "Salary:" << salary << endl;
        cout << "Income Tax:" << 0.20 * salary << endl;
    }
};

int main()
{

    Employee emp1;

    char ename[20], desg[20];
    int eno;
    float sal;
    cout << "Enter Employee Number: ";
    cin >> eno;
    cout << "Enter Employee Name: ";
    cin >> ename;
    cout << "Enter Employee Designation: ";
    cin >> desg;
    cout << "Enter Employee Salary: ";
    cin >> sal;

    cout << "\nDefault Constructor\n\n";
    emp1.Display();

    cout << "\nParameterized Constructor\n\n";
    Employee emp2(eno, ename, desg, sal);
    emp2.Display();

    cout << "\nCopy Constructor\n\n";
    Employee emp3(emp2);
    emp3.Display();
}