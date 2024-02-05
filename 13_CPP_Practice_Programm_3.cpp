#include <iostream>

using namespace std;

class TEST
{
private:
    int Testcode, NoCandidate, CenterReqd;
    string Description;

    int CALCNTR(int a)
    {
        int ans = ((a / 100) + 1);
        return ans;
    }

public:
    // take the data from user as input and calculate other data
    void SCHEDULE()
    {
        cout << endl
             << "code of the test : ";
        cin >> Testcode;

        cin.ignore(); // It will ignore first character of input
        // getchar();

        // If we want to input entire string we need to use get line function
        cout << "Write a Description : ";
        getline(cin, Description);

        cout << "Enter the number of Canidadate : ";
        cin >> NoCandidate;

        CenterReqd = CALCNTR(NoCandidate);
    }

    // print the calculated data
    void DISPTEST()
    {
        cout << endl
             << "TestCode         : " << Testcode << endl;
        cout << "Description      : " << Description << endl;
        cout << "NoCandidate      : " << NoCandidate << endl;
        cout << "Required centers : " << CenterReqd << endl
             << " ";
    }
};

int main(void)
{
    TEST June;

    June.SCHEDULE();
    June.DISPTEST();
}

// 3. Define a class TEST in C++ with following description:

// Private Members

// TestCode               of type integer
// Description            of type string
// NoCandidate            of type integer
// CenterReqd             (number of centers required) of type integer

// A member function CALCNTR() to calculate and return the number of centers as
// (NoCandidates/100+1)

// Public Members

// - A function SCHEDULE() to allow user to enter values for TestCode, Description,
// NoCandidate & call function CALCNTR() to calculate the number of Centres

// - A function DISPTEST() to allow user to view the content of all the data members