//  5. Define a class BOOK with the following specifications :

// Private members of the class BOOK are

// BOOK NO         integer type
// BOOKTITLE 20    characters
// PRICE float     (price per copy)
// TOTAL_COST()    A function to calculate the total cost for N number of copies where N
//                 is passed to the function as argument.

// Public members of the class BOOK are

// INPUT()       function to read BOOK_NO. BOOK TITLE, PRICE
// PURCHASE()    function to ask the user to input the number of copies to be
//               purchased. It invokes TOTAL_COST() and prints the total cost to be paid by the user.

#include <iostream>

using namespace std;

class BOOK
{
    int Book_No;
    string Book_Title;
    float Price;
    int qty;

    float Total_Cost(int a, float b)
    {
        return a * b;
    }

public:
    BOOK(void)
    {
        cout << endl
             << "Enter book number : ";
        cin >> Book_No;

        if (Book_No < 1000 || Book_No > 9999)
        {
            cout << endl
                 << "INVALID INPUT" << endl
                 << " ";
            exit(0);
        }

        cin.ignore();

        cout << "Enter book title : ";
        cin >> Book_Title;

        cout << "Enter price of the book : ";
        cin >> Price;

        cout << endl
             << "How many books you want to buy : ";
        cin >> qty;
    }
    ~BOOK(void)
    {
        cout << endl
             << "Book Number  : " << Book_No;
        cout << endl
             << "Book Title   : " << Book_Title;
        cout << endl
             << "Total Price  : " << Total_Cost(qty, Price) << endl
             << " ";
    }
};

int main(void)
{
    BOOK book1;
}