#include <iostream>

// Define an enumerated type for the possible errors in the program
enum Errors
{
    a,b,c
};

int main()
{
    // Declare a variable n of type int and initialize it to the value c
    int n = c;

    // Write a series of if-else statements to check if the value of n is equal to a, b, or c
    // and print a message accordingly
    if (n == a)
    {
        std::cout << "It's the first error" << std::endl;
    }
    else if (n == b)
    {
        std::cout << "It's the second error" << std::endl;
    }
    else if (n == c)
    {
        std::cout << "It's the third error" << std::endl;
    }

    return 0;
}