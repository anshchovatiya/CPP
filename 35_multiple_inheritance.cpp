#include <iostream>

using namespace std;

// this is base class 1
class base1
{
protected:
    int a;

public:
    void geta(int a1)
    {
        a = a1;
    }
};

// this is base class 2
class base2
{
protected:
    int b;

public:
    void getb(int b1)
    {
        b = b1;
    }
};

// this is derived class which is inherited form base class 1 and base class 2
class Swipe : protected base1, protected base2
{
public:
    void get_values(int a2, int b2)
    {
        geta(a2);
        getb(b2);
    }

    void swap()
    {
        int temp = a;
        a = b;
        b = temp;
    }

    void print()
    {
        cout << endl
             << "the value of a is " << a << " and the value of b is " << b << endl;
        cout << "the sum of it's degits is " << a + b << endl
             << " ";
    }
};

int main(void)
{
    Swipe two;

    two.get_values(35, 69);
    two.swap();
    two.print();
}
