#include<iostream>

using namespace std;

class Exa
{
    int a,b;
    friend Exa incrementing(Exa temp,Exa temp2);

    public :

    Exa(){};

    Exa(int c , int d)
    {
        a=c;
        b=d;
    }
    
    // this is operator overloading who will increment a and b by one
    // void operator ++()
    // {
    //     a++;
    //     b++;
    // }
 
    void print()
    {
        cout << endl << "the value of a is : " << a  << endl ;
        cout << "the value of b is : " << b << endl << " ";
    }
};

// this is a friend function who will increment a and b by one
Exa incrementing(Exa temp,Exa temp2)
{
    Exa ans;
    ans.a=temp.a+temp2.a;
    ans.b=temp.b+temp2.b;

    return ans;
}

 
int main(void)
{
    Exa a1(38,69),a2(60,69);

    a1.print();
    a2.print();
    // a2.print();
   Exa ans;
    ans = incrementing(a1,a2);
    ans.print();
    // ++a2;
    // a2.print();
}