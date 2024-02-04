// structure pointer 

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
    student *ptr = &ansh;  // It is pointer that points to the structure

    cout << "Enter name : ";
    getline(cin, ptr->name); // -> It is an arrow operator in c

    cout << "Enter id : ";
    cin >> ptr->id;

    cout << "Name : " << ptr->name << endl;
    cout << "Id : " << ptr->id << endl;
}



// // structure usig function

// #include <iostream>

// using namespace std;

// typedef struct Student
// {
//     string name;
//     long long int id;
// } student;

// student get(student *ptr);
// void print(student *ptr);
// int main(void)
// {

//     student ansh;
//     student *ptr = &ansh;

//     get(ptr);
//     print(ptr);
// }

// student get(student *ptr)
// {
//     cout << "Enter name : ";
//     getline(cin, ptr->name);

//     cout << "Enter id : ";
//     cin >> ptr->id;

//     return *ptr;
// }

// void print(student *ptr)
// {
//     cout << " Name : " << ptr->name << endl;
//     cout << " ID : " << ptr->id << endl;

//     return;
// }