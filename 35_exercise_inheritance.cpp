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
    void get_data();
    void get_data(int b4,int b8)
    {
        
        a=b4;
        b=b8;

    }
    void print_claculation();
};

// this class is inherited from base class SimpleCalculator
class ScientificCalculator {
    int a1,b1;
public:
    void get_data()
    {
    cout << "enter the first value : " ;
    cin >> a1;
    
    cout << "enter the second value : " ;
    cin >> b1;

    }
    void get_data(int b4,int b8)
    {
        
        a1=b4;
        b1=b8;

    }

    void print_scientific()
    {
        cout << " A ^ B  =  " << pow(a1, b1) << endl;
        cout << "sqrt(a) =  " << sqrt(a1) << endl;
        cout << "sqrt(b) =  " << sqrt(b1) << endl;
        cout << "tan(a)  =  " << tan(a1) << endl;
        cout << "sin(a)  =  " << sin(a1) << endl;
       
             
    }
};


class HybridCalculator : public SimpleCalculator ,public ScientificCalculator
{
    public :

            void get_data(int a,int b)
            {
                // this is function for amguability resolution
                SimpleCalculator :: get_data(a,b);
                ScientificCalculator :: get_data(a,b);
            }
            void print_data()
            {
                print_claculation();
                print_scientific();
            }
};




int main()
{
     HybridCalculator an;
     an.get_data(85,69);
     an.print_data();
    
    return 0;
}

void SimpleCalculator ::get_data()
{
    cout << "enter the first value : " ;
    cin >> a;
    
    cout << "enter the second value : " ;
    cin >> b;

}

void SimpleCalculator ::print_claculation()
{
    cout << endl
         << " A + B  =  " << a + b << endl;
    cout << " A - B  =  " << a - b << endl;
    cout << " A * B  =  " << a * b << endl;
    cout << " A / B  =  " << a / b << endl;
}