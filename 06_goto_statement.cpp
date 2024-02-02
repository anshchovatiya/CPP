#include <iostream>

using namespace std;

int main(void)
{
    int n=10;

    for (int i=1;i<=10;i++)
    {
        cout << "The number is " << i <<endl;

        if (i==7)
        {
            goto ansh;
        }
       
    }

    ansh : 

    cout << "The end of the loop";
}