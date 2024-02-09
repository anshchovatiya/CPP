// 4. Define a class in C++ with following description:

// Private Members

// A data member Flight number       of type integer
// A data member Destination         of type string
// A data member Distance            of type float
// A data member Fuel                of type float

// A member function CALFUEL() to calculate the value of Fuel as per the following criteria

// Distance                     Fuel
// <=1000                       500
// more than 1000 and <=2000    1100
// more than 2000               2200

// Public Members

// A function FEEDINFO() to allow user to enter values for Flight Number, Destination,
// Distance & call function CALFUEL() to calculate the quantity of Fuel

// A function SHOWINFO() to allow user to view the content of all the data members

#include <iostream>

using namespace std;

class FLIGHT
{
    int Flight_Number;
    string Destination;
    float Distance, Fuel;

    float CALFUEL(float Dis);

private:
    FLIGHT(void);
    ~FLIGHT(void);
};





int main(void)
{
    FLIGHT no1;
}








float FLIGHT::CALFUEL(float Dis)
{
    int fuel;
    if (Dis <= 1000)
        fuel = 500;
    else if (Dis > 1000 && Dis <= 2000)
        fuel = 1100;
    else
        fuel = 2200;

    return fuel;
}

FLIGHT::FLIGHT()
{
    cout << endl << "Enter Flight number : ";
    cin >> Flight_Number;

    cin.ignore();
    cout << "Enter your Destination : ";
    cin >> Destination;

    cout << "Enter Distance : ";
    cin >> Distance;

    Fuel = CALFUEL(Distance);
}

FLIGHT::~FLIGHT()
{
           cout << endl
             << "Flight number : " << Flight_Number;
        cout << endl
             << "Destination   : " << Destination;
        cout << endl
             << "Distance      : " << Distance;
        cout << endl
             << "Fuel needed   : " << Fuel << endl
             << " ";
}