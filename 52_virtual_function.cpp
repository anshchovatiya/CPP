#include <iostream>

using namespace std;

/*

polymorphism

Defintion --> It is a property that make objects which are belongs to different class to respond for a one type of massage(pointer varible in this case)

*/

// this base class which is represent the pointer that will access all derived class from this class

// Base class
class base1
{
    // Private member variables
    int base_a, base_b;

public:
    // Virtual function to set data
    // Can be overridden by derived classes
    virtual void set_data(int a, int b)
    {
        this->base_a = a;
        this->base_b = b;
    }

    // Virtual function to print data
    // Can be overridden by derived classes
    virtual void print_data()
    {
        cout << endl
             << "the value of base a is " << base_a << endl;
        cout << "the value of base b is " << base_b << endl
             << " ";
    }
};

// Derived class
class derived : public base1
{
    // Private member variables
    int derived_a, derived_b;

public:
    // Overriding set_data function of base class
    void set_data(int a, int b)
    {
        this->derived_a = a;
        this->derived_b = b;
        base1 ::set_data(52, 69); // Setting base class data
    }

    // Overriding print_data function of base class
    void print_data()
    {
        base1 ::print_data(); // Printing base class data
        cout << endl
             << "the value of derived a is " << derived_a << endl;
        cout << "the value of derived b is " << derived_b << endl
             << " ";
    }
};

int main()
{
    // Pointer to base class
    base1 *ptr;

    // Object of derived class
    derived E1;

    // Pointing base class pointer to derived class object
    ptr = &E1;

    // Calling overridden function
    ptr->set_data(38, 56);

    // Calling overridden function
    ptr->print_data();

    return 0;
}