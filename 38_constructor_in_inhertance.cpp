#include<iostream>

using namespace std;


/*
Case1:
class B: public A{
   // Order of execution of constructor -> first A() then B()
};

Case2:
class A: public B, public C{
    // Order of execution of constructor -> B() then C() and A()
};

Case3:
class A: public B, virtual public C{
    // Order of execution of constructor -> C() then B() and A()
};

*/


class G1
{   
         int base1;
         public :

         // this is constuctor function of base class 1
         G1(int a)
         {
            cout << "base 1 constructor " << endl;
            base1=a;
         } 

         ~G1()
         {
            cout << "base 1 distructor " << endl;
            cout << "the value of base 1 is " << base1 << endl;
         }
};
class G2
{   
         int base2;
         public :
   

         // this is constuctor function of base class 1
         G2(int a)
         {
            cout << "base 2 constructor " << endl;
            base2=a;
         } 

          ~G2()
         {
            cout << "base 2 distructor " << endl;
            cout << "the value of base 2 is " << base2 << endl;
         }
};

class Derived_Class : public G1, public G2
{
    int derived_1;
    int derived_2;

    public :

    // this is constructor  function of derived class It will pass argements to base classes construcotr function
    Derived_Class(int ar1,int ar2,int ar3,int ar4) : G1(ar1) ,G2(ar2)
    {
          cout << "Derived class constructor " << endl;
        derived_1=ar3;
        derived_2=ar4;
    }

    ~Derived_Class()
      {
        cout << "Derived class distructor " << endl;
            cout << "the value of derived 1 is " <<derived_1 << endl;
            cout << "the value of derived 2 is " <<derived_2 << endl;
         }

};


int main(void)
{
    Derived_Class an(38,59,69,49);
}