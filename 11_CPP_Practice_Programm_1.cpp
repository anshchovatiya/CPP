#include <iostream>
#include <string>

using namespace std;

class Student
{
private:
    long int admno;
    char sname[30];

    // structure of marks
    struct Subject
    {
        float marks;
    } eng, maths, science;

    float total;

    // private function to calculate total marks
    float ctotal(float m1, float m2, float m3)
    {
        float total = m1 + m2 + m3;
        return total;
    }

public:
    void Takedata()
    {
        cout << endl
             << "Enter the admno : ";
        cin >> admno;

        // sname will take enter as input so we need to use getchar so it can take enter as input
        // getchar();
        cin.ignore(); // It will ignore first character of input

        cout << "Enter the name of student : ";
        gets(sname);

        cout << "Enter marks of eng , maths and science : ";
        cin >> eng.marks >> maths.marks >> science.marks;

        // calling privately defined function
        total = ctotal(eng.marks, maths.marks, science.marks);
    }

    // float total()
    // {
    //     float t1 = ctotal(eng.marks,maths.marks,science.marks);

    //     return t1;
    // }    // This is not neded

    void Showdata()
    {

        float v = ctotal(eng.marks, maths.marks, science.marks);

        cout << endl
             << "admno       : " << admno << endl;
        cout << "name        : " << sname << endl;
        cout << "total marks : " << total << endl
             << " ";
    }
};

int main(void)
{
    Student ansh;

    ansh.Takedata();
    ansh.Showdata();
}

// 1. Define a class student with the following specification

// Private members of class student

// admno                integer
// sname                20 character
// eng. math, science   float
// total                float
// ctotal()             a function to calculate eng + math + science with float return type.

// Public member function of class student

// Takedata()   Function to accept values for admno, sname, eng, science and invoke
// ctotal()     to calculate total.
// Showdata()   Function to display all the data members on the screen