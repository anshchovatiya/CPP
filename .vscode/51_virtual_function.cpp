#include <iostream>

using namespace std;

/*

polymorphism

Defination --> It is a property that make objects which are belongs to different class to respond for a one type of massage(pointer varible in this case)

*/

// this base class which is represent the pointer that will access all derived class from this class
class base1
{
    int base_a, base_b;

public:
    virtual void set_data(int a, int b)
    {
        this->base_a = a;
        this->base_b = b;
    }

    virtual void print_data()
    {
        cout << endl
             << "the value of base a is " << base_a << endl;
        cout << "the value of base b is " << base_b << endl
             << " ";
    }
};

class derived : public base1
{
private:
    int derived_a, derived_b;

public:
    void set_data(int a, int b)
    {
        this->derived_a = a;
        this->derived_b = b;
        base1 ::set_data(52,69);
    }

    void print_data()
    {
        base1 ::print_data();
        cout << endl
             << "the value of derived a is " << derived_a << endl;
        cout << "the value of derived b is " << derived_b << endl
             << " ";
    }
};

int main()
{
    base1 *ptr;

    derived E1;
    ptr = &E1;

    ptr->set_data(38, 56);
    ptr->print_data();
}
