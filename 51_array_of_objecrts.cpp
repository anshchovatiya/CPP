#include <iostream>
#include <string.h>

using namespace std;

class Student
{
    int Id;
    string name;

public:
    void get_data()
    {
        cout << endl
             << "Enter the Student Id : ";
        cin >> Id;
        cout
            << "Enter the Student name : ";
        cin >> name;
    }

    void print_data()
    {
        cout << endl
             << "Id    : " << Id << endl;
        cout << "Name  : " << name << endl
             << " ";
    }
};

int main(void)
{
    Student st[5];

    for (int i = 0; i < 5; i++)
    {
        st[i].get_data();
    }
    for (int i = 0; i < 5; i++)
    {
        st[i].print_data();
    }
}