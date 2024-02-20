#include<iostream>

using namespace std;



class base1
{
    int a,b;
    public:
    
    friend class base2;
    base1(){};
    base1(int c,int d) : a(c),b(d)
    {};
    
    void print()
    {
        cout<< "the value of a is " << a << endl;
        cout << "the value of b is " << b << endl;
    }
};


class base2
{
    int c;
    base1 an;
    public :
    
    void get_data()
    {
       cout << "enter the value of a : ";
       cin >> an.a;
       
       cout << "enter the value of b : ";
       cin >> an.b;
       
       cout << "enter the value of c : ";
       cin >> c;
       
    }
    
    void print_data()
    {
         cout<< "the value of a is " << an.a << endl;
         cout << "the value of b is " << an.b << endl;
         cout << "the value of c is " << c << endl;
    }
};


int main(void)
{
    base2 an;
    an.get_data();
    an.print_data();
    
}