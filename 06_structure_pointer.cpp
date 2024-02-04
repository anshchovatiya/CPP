#include <iostream>

using namespace std;

typedef struct Student
{
    string name;
    long long int id;
} student;

int main(void)
{

    student ansh;
    student *ptr = &ansh;

    cout << "Enter name : ";
    getline(cin, ptr->name);

    cout << "Enter id : ";
    cin >> ptr->id;

    cout << "Name : " << ptr->name << endl;
    cout << "Id : " << ptr->id << endl;
}