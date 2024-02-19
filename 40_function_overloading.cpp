#include <iostream>

using namespace std;

struct Celsius
{
    float cel;
};

float convert(float ruppes)
{
    float v = ruppes * 83;
    return v;
}

int convert(int feet)
{
    return feet * 12;
}

double convert(double inches)
{
    double res;
    res = inches * 2.54;
    return res;
}

Celsius convert(Celsius an)
{
    Celsius ans;
    ans.cel = (an.cel * (9.0 / 5)) + 32.0;
    return ans;
}

int main(void)
{
    float ruppes;

    cout << endl
         << "enter the ruppes : ";
    cin >> ruppes;
    cout << "The " << ruppes << " is equal to " << convert(ruppes) << " Dollars" << endl;

    int feet;

    cout << endl
         << "enter the feets : ";
    cin >> feet;
    cout << "The " << feet << " is equal to " << convert(feet) << " Inches" << endl;

    double Inches;

    cout << endl
         << "enter the inches : ";
    cin >> Inches;
    cout << "The " << Inches << " is equal to " << convert(Inches) << " Centimeters" << endl;

    Celsius an;

    cout << endl
         << "enter the Celsius : ";
    cin >> an.cel;

    Celsius ans;
    ans = convert(an);
    cout << an.cel<< " is equal to " << ans.cel << " fahrenheit" << endl;
}