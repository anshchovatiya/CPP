#include <iostream>

using namespace std;

class B;

class A
{
private:
    int a, b;
    // -> & shows that friend fucntion will takes orginal values not copy
    friend void Swap_values_of_class(A &, B &);

public:
    A(int a1, int a2)
    {
        a = a1;
        b = a2;
    }
    void print()
    {

        cout << endl
             << "now class A first elements is " << a << " second element is " << b << endl;
    }
};

class B
{
private:
    int c, d;
    friend void Swap_values_of_class(A &, B &);

public:
    B(int b1, int b2)
    {
        c = b1;
        d = b2;
    }
    void print()
    {

        cout << "now class B first elements is " << c << " second element is " << d << endl
             << " ";
    }
};

// It will chage values of elements in ich class
void Swap_values_of_class(A &x, B &y)
{
    int temp = x.a;
    x.a = y.c;
    y.c = temp;

    temp = x.b;
    x.b = y.d;
    y.d = temp;
}

int main(void)
{
    A a(57, 29);
    B b(47, 38);
    Swap_values_of_class(a, b);
    a.print();
    b.print();
}