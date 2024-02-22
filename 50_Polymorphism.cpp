#include <iostream>

using namespace std;

/*

POLYMORPHISM

Poly --> many , Morphism --> forms

// Polymorphism means many forms -> one name and multiple forms


polymorphism has two types you can see that in file Polymorphism.drawio


Run time Polymorphism

--> In normal case our compiler already knows before compile which function to execute first that's call early binding

--> But when complier do not know which function to run first , It will decide on run time which function to run on runtime


*/

class base1
{
    int base_a, base_b;

public:
    base1(){};
    base1(int base_a, int base_b)
    {
        this->base_a = base_a;
        this->base_b = base_b;
    }

    void set_data(int a,int b)
    {
        this->base_a = a;
        this->base_b = b;
    }

    void print_data()
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
    derived(){};
    derived(int derived_a, int derived_b)
    {
        this->derived_a = derived_a;
        this->derived_b = derived_b;
    }

    void print_data()
    {
        cout << endl
             << "the value of derived a is " << derived_a << endl;
        cout << "the value of derived b is " << derived_b << endl
             << " ";
    }
};

int main()
{
    base1 *ptr;
    base1 c1(45, 40);
    //    ptr = &c1;

    //    ptr->print_data();

    derived *ptr2;
    derived c2(87, 39);
    //    ptr2 = &c2;

    //    ptr2->print_data();

    // this will only work if current class is inherited from pointer class and it is valid

    ptr = &c2;
    ptr -> set_data(38,69);
    // now ptr who is pointing to base1 datatype of object point to derived datatype of object
    // because derived class is inherited from base1 class it is valid argument
    ptr->print_data();
    // It will call function of base1 class because it is pointing to base1 class
}
