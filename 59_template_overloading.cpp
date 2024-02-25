#include<iostream>

using namespace std;


void func(int a)
{
    cout << endl << "I am currently in normal function and value of a is " << a << endl << " ";
}

template <class T>
void func(T a)
{
    cout << endl << "I am currently in templatized function and value of a is " << a << endl << " " ;
}



int main(void)
{

    func(34); // this will call normal function because it is exact match of normal fuction , so it will take priority
    func('c');  // this will call templatized function because it is not match for normal function


}