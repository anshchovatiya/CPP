#include<iostream>

 using namespace std;


    // basically union is same as structure. With structure , we were able to access all data in structure , but union will give you access to single data 


    typedef union my_salary
    {
       int salary;
       float basic;
       char name;
    } sale ;
    



 int main(void){
    
    sale ansh;
    ansh.salary=16000;

    cout << "My salary is "<< ansh.salary << endl;

    ansh.basic=28300;

    //It will return garbage value because I have tried to access multiple data
    cout << "my salary is " << ansh.salary << endl;

    //It will give corect output because It is reasigned data
    cout << "my basic salary is " << ansh.basic << endl;

    

}