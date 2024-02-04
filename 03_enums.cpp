#include<iostream>

 using namespace std;


 enum Example 
 {
   A,B,C  // you can customize value like this A=3, B=18, C=458
 };

 int main(void){

   //  //  Enums are user-defined types which consist of named constants. Enums are used to make the program more readable. 

    enum Meal {breakfast,launch,dinner};
     
     cout << breakfast << endl;  // It will return 0
     cout << launch << endl;  // It will return 1
     cout << dinner << endl;  // It will return 2

     //you can also write it like this 

     Meal m1=breakfast;

     cout << m1 <<  endl ;

   // Example value = 1; -> It will show the error becuase enum must be represent by it's reference

   // Example value = A;

   // if (value==A)  || // if (value==0)// It will not show the error because A is basically 0 b is 1 and c is 2
   // {
   //    cout << value << endl;  
   // }

   // It makes program more readable


   // If you decalre Integers you can reasign that and It could cause problem  

   // that why you can decalre enums and assign them values in formate of name



}




