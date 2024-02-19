#include <iostream>

using namespace std;

int main(void)
{
    int a = 3;
    int *b = &a;
    cout << endl
         << "the value of a is " << a << endl;
    *b = 3548;
    cout << "the value of a is " << a << endl;

    int *ptr = new int(3);

    ptr[0] = 3;
    ptr[1] = 5;
    ptr[2] = 5;

    //     // this will delete only some of the memory
    //     delete ptr;

    //    cout << "the value of a[0] is " << ptr[2] << endl ;

    // this will delete intier array
    delete[] ptr;
    ptr = NULL;  // if you use null the following line will not be executed

    cout << endl
         << "the value of a[2] is " << ptr[2] << endl
         << " ";
}