#include <iostream>

#define PI (22.0 / 7.0)

using namespace std;

// the function name does not matter as long as arguments are different in functions
// overloadin is basically when one function name can do different task for different arguments

int volume1(float b)
{

    cout << "The area of circle is ";   // This is execption

    return PI * b * b;
}

float volume(int i)
{
    cout << "The area of cube is ";
    return i*i;
}

int volume(int a, int b)
{
    cout << "The area of recetangle is ";
    return a*b;
}

int main(void)
{

    cout << "Area of Circle :  " << endl
         << volume1(3) << endl;
    cout << "Area of rectengle :  " << endl << volume(4,6)<< endl;
    cout << "Area of cube : " << endl << volume(10);
         
}