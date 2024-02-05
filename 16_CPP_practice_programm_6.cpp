
#include <iostream>

using namespace std;

#define N 5  // number of subjects

class REPORT
{

private:
    int adno;
    string name;
    float marks[N];

    // structure to get total and Average in same variable
    struct totavg
    {
        int total;
        float AVG;
    } stu;

    // function to calculate average
    totavg GETAVG(float a[])
    {
        totavg n;
        n.total = 0;
        n.AVG = 0;
        for (int i = 0; i < N; i++)
        {
            n.total += a[i];
        }
        n.AVG = ((float)n.total / N);

        return n;
    }

public:

    // function to take input and calculat total and avg marks
    void READINFO()
    {
        cout << endl
             << "Enter Admission number : ";
        cin >> adno;

        getchar();

        cout << "Enter student name : ";
        getline(cin, name);

        for (int i = 0; i < N; i++)
        {
            cout << "enter marks of subject " << i + 1 << " : ";
            cin >> marks[i];
        }

        stu = GETAVG(marks);
    }

    // function to print all entites
    void DISPLAYINFO()
    {
        cout << endl
             << "Admission number : " << adno;
        cout << endl
             << "Student Name     : " << name;
        cout << endl
             << "total marks      : " << stu.total;
        cout << endl
             << "Average marks    : " << stu.AVG << endl
             << " ";
    }
};


int main (void)
{
    REPORT stu1;

    stu1.READINFO();
    stu1.DISPLAYINFO();
}










// 6. Define a class REPORT with the following specification:

// Private members :

// adno       4 digit admission number
// name       20 characters
// marks      an array of N floating point values
// average    average marks obtained
// GETAVG()   a function to compute the average obtained in five subject

// Public members:

// READINFO()       function to accept values for adno, name, marks. Invoke the function
//                  GETAVG()
// DISPLAYINFO()    function to display all data members of a report on the screen.

//                  You should give function definitions.