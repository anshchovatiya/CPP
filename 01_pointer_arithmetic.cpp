
#include <iostream>

using namespace std;

int main()
{
   int n[3];

   // It will assign n[0] value to pointer p 
   int *p=n;
   
   for (int i=0; i<3; i++)
   {
       cout <<" enter the value of element "<< i+1 << " : ";
       cin >> *p; // you must decalre that you are taking input in pointer 
       p++;
   }
   for (int i=0; i<3; i++)
   {
       cout <<" the value of element "<< i+1 << " is " << n[i]<<endl;
      
   }

    return 0;
}