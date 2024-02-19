#include<iostream>

using namespace std;

class initialize
{
    int a;
    int b;

    public :

    // initialize(int g,int h) : a(g), b(h)
    // initialize(int g,int h) : a(g), b(h+g)
    // initialize(int g,int h) : a(g), b(a+g)
    
    // initialize(int g,int h) : b(h),a(b*g)  ----> this will not give desired result because a is initialized first in class so a will give garbage value
    initialize(int g,int h) : a(g), b(a/g)
    {
        cout << "The values have been initialized" << endl;
        cout << "the value of a is " << a << endl;
        cout << "the value of b is " << b << endl;
    }
};


int main(void)
{
    initialize an(34,59);
    
}