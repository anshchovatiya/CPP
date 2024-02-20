#include <iostream>
#include <cmath>

using namespace std;

// distance between two points

// first point class

class second;

class first
{
    int p1, p2;

    friend double distace_cal(first, second);

public:
    first(int a1, int a2)
    {
        p1 = a1;
        p2 = a2;
    }
};
class second
{
    int v1, v2;
    friend double distace_cal(first, second);

public:
    second(int a1, int a2)
    {
        v1 = a1;
        v2 = a2;
    }
};

double distace_cal(first a, second b)
{
    // √[(x2 − x1)2 + (y2 − y1)2]
    //  pow(base, exponent)
    // sqrt(number)

    double d = 0;

    // Mathematical formula to find distance between two pointers
    d = sqrt(pow((b.v1 - a.p1), 2) + pow((b.v2 - a.p2), 2));

    return d;
}

int main(void)
{
    first x(3, 5);
    second y(2, 6);
    double d = distace_cal(x, y);
    cout << endl
         << "the distance between two pointers is " << d << endl
         << " ";
}