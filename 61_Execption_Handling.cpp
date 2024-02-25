#include <iostream>

using namespace std;

int main()
{
    // try is program who is causing problems
    try
    {
        int a;
        cout << endl
             << "enter the number : ";
        cin >> a;
        if (a == 0)
        // if the condition is true that means the program has error 
        // so It will throw the value , terminate the program and you have to catch it in catch section with similar data type
            throw 1;
        cout << "There are no errors";
        throw 0;
    }
    catch (int a)
    {
        // Catch will receive value and it will give cause of error and give solution according to the thrown value 
        if (a == 1)

        {
            cout << endl
                 << "the value is zero so code will not work , please enter valid number " << endl
                 << " ";
        }
        else if(a==0)
        {
            cout << endl
                 << "Program has compiled successfully" << endl
                 << " ";
        }
    }
}