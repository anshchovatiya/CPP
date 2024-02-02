#include <iostream>

using namespace std;

int main(void)
{
    cout << "dollar in to rupee press 1 " << endl ;
    cout << "feet in to inches press 2 " << endl ;
    cout << "inches into centimeters press 3 " << endl ;
    cout << "celsius into feet press 4 " << endl ;
    cout << "  " <<endl ;

    int n;

    do {
        cout << "enter the value : " ;
        cin >>  n;
    } while (n<1|| n>4);

    if ( n==1)
    {
        cout << "enter";
    }



}