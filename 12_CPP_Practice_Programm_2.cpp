#include <iostream>
#include <string>

using namespace std;

class batsman
{
private:
    int bcode;
    char bname[20];
    int innings, notout, runs;

    float batavg;

     // function to calculate bats man average
    float calcavg(int a, int b)   
    {
        float avg = 0;
        avg = (float)a / (float)b;
        return avg;
    }

public:

     // take data from user as input 
    void readdata()
    {
        cout << endl
             << "Enter the batsman code : ";
        cin >> bcode;

        getchar();

        cout << "Enter batsman name: ";
        gets(bname);

        cout << "Enter total Innings : ";
        cin >> innings;

        cout << "Enter total notout matches: ";
        cin >> notout;

        cout << "Enter total runs scored : ";
        cin >> runs;

        batavg = calcavg(runs, innings);
    }

     // display the data
    void displaydata()
    {
        cout << endl
             << "batsman code            : " << bcode;
        cout << endl
             << "batsman name            : " << bname;
        cout << endl
             << "batsman total innings   : " << innings;
        cout << endl
             << "batsman not-out matches : " << notout;
        cout << endl
             << "batsman total runs      : " << runs;
        cout << endl
             << "batsman average runs    : " << batavg << endl << " ";
    }
};



int main(void)
{
    batsman bats1;

     // call the function to take input
    bats1.readdata();  
    // call the function to display the data
    bats1.displaydata();
}








//  2. Define a class batsman with the following specifications:

// Private members:

// bcode                        4 digits code number
// bname                        20 characters
// innings, notout, runs        integer type
// batavg                       it is calculated according to the formula –
//                              batavg =runs/(innings-notout)   runs/innings
// calcavg()                    Function to compute batavg

// Public members:

// readdata()                   Function to accept value from bcode, name, innings, notout and
//                              invoke the function
// calcavg()                    to calculate average.
// displaydata()                Function to display the data members on the screen.
