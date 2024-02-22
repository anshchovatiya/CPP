#include<iostream>

using namespace std;

class molecule
{
    int a,b;

    public :

   molecule& mol(int a, int b)
    {
        // (this) is actually pointer which is pointing to current object
        this -> a = a;
        this -> b = b;
        return *this;
    }

    void print_data()
    {
        cout << endl << "the value of a is " << a << endl;
        cout << "the value of b is " << b << endl << " ";
    }
};



int main(void)
{
    molecule jarvus,proton;

    jarvus.mol(38,59).print_data(); // we can write it like this 
    proton.mol(85,39).print_data();

    
}
