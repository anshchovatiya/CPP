#include <iostream>

using namespace std;

class Flight
{
    // data type decalration
private:
    int Flight_number;
    string Destination;
    float Distance, Fuel;

    // calculate the value of Fuel
    float CALFUEL(float Dis)
    {
        float fuel = 0;

        if (Dis <= 1000)
        {
            fuel = 500;
        }
        else if (Dis > 1000 && Dis <= 2000)
        {
            fuel = 1100;
        }
        else if (Dis > 2000)
        {
            fuel = 2200;
        }

        return fuel;
    }

public:
    // take the information and calclulate the value of fuel
    void FEEDINFO()
    {
        cout << endl
             << "Enter the Flight number : ";
        cin >> Flight_number;

        cin.ignore(); // It will ignore first character of input

        cout << "Enter your Destination : ";
        getline(cin, Destination);

        cout << "Enter the distance : ";
        cin >> Distance;

        Fuel = CALFUEL(Distance);
    }

    // display the data
    void SHOWINFO()
    {
        cout << endl
             << "Flight number : " << Flight_number;
        cout << endl
             << "Destination   : " << Destination;
        cout << endl
             << "Distance      : " << Distance;
        cout << endl
             << "Fuel needed   : " << Fuel << endl
             << " ";
    }
};

int main(void)
{
    Flight first;

    first.FEEDINFO();
    first.SHOWINFO();
}

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