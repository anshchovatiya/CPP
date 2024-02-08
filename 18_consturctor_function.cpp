
// constuctor is basically building block of a class
// when we creat object , construtor function will be automatically executed

#include <iostream>

using namespace std;

class Student
{
private:
    string s;

public:
    Student(void); // --> constructor declaration
                   // --> It declars that we are consruting Student class
    void printname()
    {
        cout << s;
    }
};

Student::Student(void) // consturctor defination
{
    cout << "enter the name :";
    cin >> s;
}

int main(void)
{
    Student ansh;
    // ansh.printname();
}