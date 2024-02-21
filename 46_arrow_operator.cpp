#include <iostream>

using namespace std;

class base
{
    int a, b;

    public :

    base(){};

    base(int c,int d): a(c),b(d) {};

    void get_data()
    {
        cout << endl << "the value of a is " << a ;
        cout << endl << "the value of b is " << b << endl << " " ;
    }
};


int main(void)
{
    base an(38,58);

    an.get_data();

    cout << "the size of (base) object is " << sizeof(an) << endl;


     base *ptr = &an;
     
    //  (*ptr).get_data();
     ptr->get_data();  // --> both function will do the same thing 

     // so basically arrow operator is just like (*) operator it is easy to understand 


    base *ptr1 = new base[3];
    ptr1->get_data();

    ptr1+=8;
    ptr1->get_data();
}        