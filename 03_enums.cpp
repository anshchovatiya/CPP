#include<iostream>

 using namespace std;

 int main(void){

    //  Enums are user-defined types which consist of named constants. Enums are used to make the program more readable. 

    enum Meal {breakfast,launch,dinner};
     
     cout << breakfast << endl;  // It will return 0
     cout << launch << endl;  // It will return 1
     cout << dinner << endl;  // It will return 2

     //you can also write it like this 

     Meal m1=breakfast;

     cout << m1 <<  endl ;

}