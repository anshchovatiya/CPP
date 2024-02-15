#include<iostream>

using namespace std;


class greet_1
{
    public:

    void greet()
    {
        cout << endl << "hello , I am function of base class greet_1" << endl << " ";
    }
};

class greet_2
{
    public:

    void greet()
    {
        cout << endl << "Hello, I am function of base class greet_2" << endl << " ";
    }
};

class greet_3 : public greet_1, public greet_2
{
    public:

    void greet()
    {
        // If you write this line it will call function of class greet_1 
        // greet_1 :: greet(); 
 
        // If you write this line it will call function of class greet_1 
        // greet_2 :: greet(); 

        cout << endl << "Hello, I am function class greet_3" << endl << " ";
    }
 
};

int main(void)
{
    greet_3 ansh;

    ansh.greet();
}
