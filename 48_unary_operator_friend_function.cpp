#include<iostream>

using namespace std;

class Exa
{
    int a,b;
    friend void incrementing(Exa &temp);

    public :

    Exa(int c , int d)
    {
        a=c;
        b=d;
    }
    
    // this is operator overloading who will increment a and b by one
    void operator ++()
    {
        a++;
        b++;
    }

    void print()
    {
        cout << endl << "the value of a is : " << a  << endl ;
        cout << "the value of b is : " << b << endl << " ";
    }
};

// this is a friend function who will increment a and b by one
void incrementing(Exa &temp)
{
    temp.a+=1;
    temp.b+=1;
}


int main(void)
{
    Exa a1(38,69),a2(60,69);

    a1.print();
    a2.print();
    incrementing(a1); 
    a1.print();
    ++a2;
    a2.print();
}