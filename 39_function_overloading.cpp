#include <iostream>

using namespace std;

float calculate(float a)
{
    // the areal of circle
    float pi = 3.14159265;
    float ans = 0;

    ans = pi * a * a;
    return ans;
}

int calculate(int a)
{
    // area of square
    int ans;
    ans = (float)a * (float)a;
    return ans;
}

int calculate(int a, int b)
{

    int ans = 0;

    ans = a * b;
    return ans;
}
double calculate(double a, double b)
{

    double radius = 0;
    radius = (a * b) / (double)2;
    return radius;
}

int main(void)
{
    float r;

    cout << endl
         << "The length of circle : ";
    cin >> r;
    cout << "The are of cricle " << calculate(r) << endl;

    int a;
    cout << endl
         << "The length of square : ";
    cin >> a;
    cout << "The are of square " << calculate(a) << endl;

    int c,d;
    cout << endl
         << "The length of recetangle : ";
    cin >> c;
    cout << "The width of recetangle : ";
    cin >> d;
    cout << "The are of square " << calculate(c, d) << endl;

    double f,g;
    cout << endl
         << "The height of triangle : ";
    cin >> f;
    cout << "The width of triangle : ";
    cin >> g;
    cout << "The are of triangle is " << calculate(f, g) << endl;
}

