#include <iostream>
#include <string>

using namespace std;

class BOOK
{
private:
    int BOOK_NO;
    string BOOK_TITLE;
    float Price;
    int Qty;

    // calculate total cost
    float Total_Cost(int N, float price)
    {
        float total = N * price;
        return total;
    }

    float Total;

public:

    // take data as an input
    void INPUT()
    {
        cout << endl
             << "Enter the book number : ";
        cin >> BOOK_NO;

        getchar();

        cout << "Enter the Title of book : ";
        getline(cin, BOOK_TITLE);

        cout << "Enter price of the book : ";
        cin >> Price;
    }

    // take qty as input and then calclate the purchase amount
    void PURCHASE()
    {
        cout << endl
             << "How many copies you want to buy : ";
        cin >> Qty;

        Total = Total_Cost(Qty, Price);

        cout << endl
             << "BOOK NO       : " << BOOK_NO<< endl;
        cout << "TITLE OF BOOK : " << BOOK_TITLE << endl;
        cout << "Total cost    : " << Total << endl << " ";
    }
};

int main(void)
{
    BOOK BOOK1;

    BOOK1.INPUT();
    BOOK1.PURCHASE();
}








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