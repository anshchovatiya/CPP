
// constuctor is basically building block of a class
// when we creat object , construtor function will be automatically executed

#include <iostream>

using namespace std;

class Student
{
private:
    string s;

public:
    Student(void); // --> constructor function declaration  // construcotor function name should be same as class
                   // --> It declars that we are consruting Student class

    ~Student(); // --> destructor function decalration   // destructor function name should be same as class

    void printname()
    {
        cout
            << " your name is " << s << endl;
    }
};

Student::Student(void) //  -->consturctor defination

{
    // It will automatically execute when we crate new object
    cout << endl << "enter the name : ";
    getline(cin,s);

    printname();
}

// Student::Student(void) // consturctor defination  //--> It is default constructor becuause it will not take value in output
// {
//     s = "ansh chovatiya";
// }

Student::~Student() // destructor defination  // ~ -> destructor operatorn
{
    // It will automatically execute when complier is destroying the object
    cout << endl
         << "this objects is now destroyed";
}

int main(void)
{
    {
        Student ansh;
    }

    // now construction function will be automatically executed

    // ansh.printname();
}