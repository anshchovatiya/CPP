
// check the wether given number is prime number or not .

#include <iostream>
#include <math.h>

using namespace std;

int main(void)
{
    int number;

    printf("enter the number : ");
    scanf("%d", &number);

    int count = 1;

    for (int i = 2; i <= sqrt(number); i++)
    {
        if (number % i == 0)
        {
            count = 0;
        }
    }

    if (count&&number!=1)
    {
        cout << "The number is prime number " << endl;
    }
    else
    {
        cout << "The number is not prime number " << endl;
    }
}