
#include <iostream>

using namespace std;

#define N 5 // subjects

class REPORT
{
    int adno;
    string name;
    float marks[N];
    // sturcture for total and average
    struct compute
    {
        float total, average;
    } ST;
    compute GETAVG(float a[]);

public:
    REPORT();  // constructor function
    ~REPORT(); // destructor function
};

int main(void)
{
    REPORT student1;
}

REPORT::REPORT() // constructor function to Input all data
{
    cout << endl
         << "Admission Number   : ";
    cin >> adno;

    if (adno < 1000 || adno > 9999)
    {
        cout << "INVALID INPUT";

        exit(0);
    }

    cin.ignore();

    cout << "Name Of Student    : ";
    getline(cin, name);

    cout << endl;

    for (int i = 0; i < N; i++)
    {
        cout << "Marks of Subject " << i + 1 << " : ";
        cin >> marks[i];
        if (marks[i] > 100 || marks[i] < 0)
        {
            cout << "INVALID INPUT";
            exit(0);
        }
    }

    ST = GETAVG(marks);
}

// REPORT::compute --> this statement tells compiler that compute structure is member of a class
REPORT::compute REPORT::GETAVG(float a[]) // function to calculate average and total
{
    compute AVG;
    AVG.total = 0;
    AVG.average = 0;
    for (int i = 0; i < N; i++)
    {
        AVG.total += a[i];
    }
    AVG.average = AVG.total / N;

    return AVG;
}

REPORT::~REPORT() // destructor function for printing all members of class
{
    cout << endl
         << "Admission Number : " << adno << endl;
    cout << "Student Name     : " << name << endl;
    cout << "Total Marks      : " << ST.total << endl;
    cout << "Average Marks    : " << ST.average << endl
         << " ";

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
}