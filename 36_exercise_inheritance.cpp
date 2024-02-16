#include <iostream>
#include <cmath>

#define PI (22 / 7.0)
using namespace std;
/*
Create 2 classes:
    1. SimpleCalculator - Takes input of 2 numbers using a utility function and performs +, -, *, / and displays the results using another function.
    2. ScientificCalculator - Takes input of 2 numbers using a utility function and performs any four scientific operations of your choice and displays the results using another function.

    Create another class HybridCalculator and inherit it using these 2 classes:
    Q1. What type of Inheritance are you using?
    Q2. Which mode of Inheritance are you using?
    Q3. Create an object of HybridCalculator and display results of the simple and scientific calculator.
    Q4. How is code reusability implemented?
*/

//  this is base class
class SimpleCalculator
{
protected:
    int a, b;

public:
    void get_data(int, int);
    void print_claculation();
};

// this class is inherited from base class SimpleCalculator
class ScientificCalculator : protected SimpleCalculator
{
public:
    void pass_data(int a3, int b3)
    {
        get_data(a3, b3);
    }

    void print_scientific()
    {
        print_claculation();
        cout << " A ^ B  =  " << pow(a, b) << endl
             << " ";
    }
};

class single
{
protected:
    int a1;

public:
    void passaa1(int h)
    {
        a1 = h;
    }
    void get_num()
    {
        cout << endl
             << " Squar root of a : " << sqrt(a1) << endl;
        cout << " A * PI  =  " << a1 * PI;
    }
};

class all_mix : public ScientificCalculator, public single
{
public:
    void pass_number(int a5, int a6)
    {
        passaa1(a5);
        get_data(a5, a6);
    }

    void print_data()
    {
        get_num();
        print_scientific();
    }
};

int main()
{

    all_mix first;

    first.pass_number(53, 69);
    first.print_data();

    return 0;
}

void SimpleCalculator ::get_data(int a1, int b1)
{
    a = a1;
    b = b1;
}

void SimpleCalculator ::print_claculation()
{
    cout << endl
         << " A + B  =  " << a + b << endl;
    cout << " A - B  =  " << a - b << endl;
    cout << " A * B  =  " << a * b << endl;
    cout << " A / B  =  " << a / b << endl;
}