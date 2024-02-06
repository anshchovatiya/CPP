#include <iostream>

using namespace std;

const int N = 3; // const will keep N = 3 for rest of the progrma , If we try to chage value of N , It will thorow the error;

inline int sum(int a, int b) // Inline will send the code to the place where function is called
{
    return a + b;
}

int divison(int a, int b = 2)
{
    return a / b;
}

int main(void)
{

    int a = 16, b = 4;

    cout << "The sum of a and b is " << sum(a, b) << endl; // It the logic of function will be called here so that compiler do not have to go into function and recieve return value

    cout << "The divison of a and b is " << divison(a, b) << endl; // It will return 4 becuase we have provided 2 values to the function
    cout << "The divison of a and b is " << divison(a) << endl;    // It will return 8 because we onlu passed one argument , so the function will take 2 as defalut value of b

    // N=5; // It will show the error

    cout << "The value of N is " << N << endl;
}



