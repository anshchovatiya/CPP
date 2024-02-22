#include<iostream>

using namespace std;

class Num
{
    int a,b;

    public :

      Num(int c,int d) : a(c), b(d){};
      
      void operator ++(int)
      {
       a+=a*2;
       b+=b*2;
      }

      void operator --(int)
      {
        a-=a*2;
       b-=b*2;
      }

      void print()
    {
        cout << "the value of a is " << a << endl;
        cout << "the value of b is " << b << endl;
    }
};


int main(void)
{ 
    Num n1(38,69);  

    n1.print();  
    n1--;
    n1.print();  

    Num n2(-59,-68);   
    n2.print();
    n2--;    
    n2.print();   
   
     
}
