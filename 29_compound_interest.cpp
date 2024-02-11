
// calculate compound interest with using overloading

#include <iostream>

using namespace std;

class compound
{
    float interest_rate, Interest;

public:
    compound(){};

    // If you enter interest rate as int second this constructor function will be invoked
    compound(int p, int r, int t)
    {
        Interest = (float)p;
        interest_rate = ((float)r / 100);
        for (int i = 1; i <= t; i++)
        {
            Interest *= (1.0 + interest_rate);
        }
    }

    // If you enter interest rate as float second this constructor function will be invoked
    compound(int p, float r, int t)
    {
        Interest = (float)p;
        interest_rate = r;

        // this loop will calculate compound interest according to duration(t)
        for (int i = 1; i <= t; i++)
        {
            Interest *= (1.0 + interest_rate);
        }
    }

    void show_data()
    {
        // this is function to print interest
        cout << endl
             << "Interest  : " << Interest << endl
             << " ";
    }
};

int main(void)
{
    compound inv1, inv2;

    int p, r, t; // int interest rateffffffffffffff
    float R;     // float interest rate

    cout << endl
         << "enter the principal amout : ";
    cin >> p;

    cout << "enter interest rate : ";
    cin >> R;

    cout << "enter duratiron(years) : ";
    cin >> t;

    // If you enter interest rate as float second constructor function will activate
    inv1 = compound(p, R, t);
    // If you in enter interest rate as int first constructor function will activate

    inv1.show_data();
}