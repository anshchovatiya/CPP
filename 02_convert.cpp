#include <iostream>

using namespace std;

int main(void)
{
    cout << "dollar in to rupee press 1 " << endl;
    cout << "feet in to inches press 2 " << endl;
    cout << "inches into centimeters press 3 " << endl;
    cout << "celsius into fahrenheit press 4 " << endl;
    cout << "  " << endl;

    int n;

    do
    {
        cout << "enter the value : ";
        cin >> n;
    } while (n < 1 || n > 4);

    if (n == 1)
    {
        int d;
        cout << endl
             << "enter the dollars : ";
        cin >> d;
        float ruppes = d * 82.87;

        cout << d << " dollars is equl to " << ruppes << " ruppes" << endl;
    }

    else if (n == 2)
    {
        int f, i;
        cout << endl
             << "enter the feets : ";
        cin >> f;

        i = f * 12;
        cout << f << " feets is equal to " << i << " inches " << endl;
    }

    else if (n == 3)
    {
        int inches;
        float centimeters = 0;

        cout << "enter the inches : ";

        cin >> inches;

        centimeters = inches * 2.54;
        cout << inches << " inches is equal to " << centimeters << " centimeters" << endl;
    }

    else if (n == 4)
    {
        float celsius, fahrenheit;

        cout << endl;
        cout << "enter the celsius : ";
        cin >> celsius;

        fahrenheit = (celsius * 1.8) + 32;
        cout << celsius << " celsius is equal to " << fahrenheit << " fahrenheit " << endl;
    }
}