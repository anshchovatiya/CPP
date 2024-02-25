// --> default visibility mode of derived class is private
// --> If you declare private in derived class all the public member of base class will become private members of derived class
// --> If you declare public in derived class all the public member of base class will become public members of derived class

#include <iostream>

using namespace std;

// Employee is base class
class Employee
{
public:
    int emp_id;
    string name;
    float salary;

    Employee(){};
    Employee(int id, string n, float sal);
    void printout();
};

// Coder is derived class which is inherited from Employee
class Coder : private Employee
{
public:
    string langauge;
    Coder(int id, string n, float sal, string cl);
    void printout();
};

int main(void)
{
    // this will send data to employee class
    Employee emp1(3, "nayan chovatiya", 53800.50);
    // this will print data of employee emp1
    emp1.printout();

    // this will send data to Coder class which is inherited
    Coder cdr1(6, "ansh chovatiya", 38006.05, "C++");
    // this will print data of Coder cdr1
    cdr1.printout();
}

// this function will print data for Employee class
void Employee::printout()
{
    cout << endl
         << "employee id : " << emp_id << endl;
    cout << "Name        : " << name << endl;
    cout << "Salary      : " << salary << endl
         << " ";
}

// this function will get data for Employee class
Employee::Employee(int id, string n, float sal)
{
    emp_id = id;
    name = n;
    salary = sal;
}

// this function will get data for Coder class which is inherited class
Coder::Coder(int id, string n, float sal, string cl)
{
    emp_id = id;
    name = n;
    salary = sal;
    langauge = cl;
}

// this function will print; data for Coder class which is inherited class(derived class)
void Coder::printout()
{
    cout << endl
         << "employee id  : " << emp_id << endl;
    cout << "Name         : " << name << endl;
    cout << "Salary       : " << salary << endl;
    cout << "Code languages: " << langauge << endl
         << " ";
}
