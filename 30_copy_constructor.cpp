#include <iostream>

using namespace std;

class number
{
    int a;

public:
    number() {}
    number(int a1)
    {
        a = a1;
    }

    //--> If this function will commented program will still work becuase every class has default copy constuctor function
    number(number &a3) 
    {
        cout << endl
             << "copy constructor has been activated and ";
        a = a3.a;
    }

    // --> If this function will commented program will still work becuase every class has default copy constuctor function
    void display()
    {

        cout
            << endl
            << "the number is " << a << endl
            << " ";
    }
};

int main(void)
{
    number one(10);
    one.display();

    // this is copy constructor function
    number two(one);
    two.display();

    // this time copy constructor will not work because it is assigning the value
    number three;
    three = one; 
    three.display();

    // this time copy constructor will be activated because it is creating new object
    number four = three; 
    four.display();
}