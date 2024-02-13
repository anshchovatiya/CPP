#include <iostream>

using namespace std;


class base_class
{
    int number1;

    public :

    int number2;

    // this function will set value of number1 and number2
    void setdata()
    {
        number1 = 50;
        number2 = 60;
    };

    // if you want to access numbere1 this function will give access
    int getnumber1()
    {
        return number1;
    }

    // if you want access number2 this function will give access
    int getnumber2()
    {
        return number2;
    }

};


class derived_class :  base_class 
{
    int number3;
    public :

    // this function will set number3
    void setnum()
        {
            // this is function of base class which is inherited by derived class
            // but we derived class in private mod so if want to use this function you need call it in public function
            setdata();
            number3 = number2 * getnumber1();
        }


    void print()
    {
        cout << "the third number is " << number3 << endl;
    }

};


int main(void)
{
    derived_class v1;
    
    // --> if we want you use it like this we need to Inherit class in public mode
    // v1.getnumber1();  

    v1.setnum();

    v1.print();
} 