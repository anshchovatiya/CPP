#include<iostream>

using namespace std;
 
int fibonaci (int v)
{
    if(v<=1) return 1;

    else return fibonaci(v-1) + fibonaci(v-2);
}

int main(void)
{
    int n;

    cout << "ente the value of N: ";
    cin >> n;

    for (int i=0;i<n;i++)
    {
        cout << fibonaci(i) << " ";
    }
}