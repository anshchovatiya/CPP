#include <iostream>

using namespace std;

void print_menu();

struct Dish
{
    string name;
    double normal_price;
    double Cheese_butter_price;
    int quantity;
};

class Table
{
    int Table_number;
    string customer_name;
    static int table_number;

public:
};

int main()
{

    cout << endl
         << "---------------------------------------------------------------" << endl
         << " ";
    cout << endl
         << "Welcome to over restaurant" << endl
         << " ";

    cout << endl
         << "---------------------------------------------------------------" << endl
         << " ";
    cout << endl
         << "Choose menu press 1 " << endl;
    cout << endl
         << "Check status of table press 2" << endl;
    cout << endl
         << "Check out from restaurant press 3" << endl;
    cout << endl
         << "Make reseravations press 4" << endl;
    cout << endl
         << "Make a bill press 5" << endl;
    cout << endl
         << "Exit press 0" << endl;

    cout << endl
         << "---------------------------------------------------------------" << endl
         << " ";
    int number;
    cout << endl
         << "Enter the number : ";
    cin >> number;

    if (number < 0 || number > 5)
    {
        cout << endl
             << "Invalid number" << endl;
        goto end;
    }

    if (number == 1)
    {
        print_menu();
    }

end:
    cout << endl
         << "Session  is complete" << endl;
}

void print_menu()
{
    cout << endl
         << "-----------------------------Items-----------------------------" << endl
         << " ";
    cout << endl
         << "                          Main course                          " << endl
         << " ";

    cout << endl
         << "Number     Item                Normal       cheese/buter    " << endl
         << endl
         << "  1      Paneer Pakoda          220            250          " << endl
         << "  2      Palak Paneer           170            190          " << endl
         << "  3      Veg Burger             110            140          " << endl
         << "  4      Veg Grill  Sandwich    160            200          " << endl
         << "  5      Veg Fry rice           160             -           " << endl
         << "  6      Veg Biryani            350             -           " << endl
         << "  7      Mix Veg Pizzah         450            500          " << endl
         << "  8      Jeera Rice             160             -           " << endl
         << "  9      Potato Cheeps          80             110          " << endl
         << "  10     Masala Dosa            90             130          " << endl
         << "  11     Momos                  90             140          " << endl
         << "  12     Franki                 140            180          " << endl
         << "  13     Sweet Corn             110            150          " << endl
         << " ";

    cout << endl
         << "---------------------------------------------------------------"
         << " ";

    cout << endl
         << endl
         << "                           Desert                           " << endl
         << " ";

    cout << endl
         << "Number     Item                Normal         " << endl
         << endl
         << "  14     Gulab Jamun            60            " << endl
         << "  15     Kulfi                  40            " << endl
         << "  16     Vanil Ice-Cream        70            " << endl
         << "  17     Chocolate Ice-Cream    80            " << endl
         << "  18     chocolate Cake         500           " << endl
         << " ";

    cout << endl
         << "---------------------------------------------------------------"
         << " ";

    cout << endl
         << endl
         << "                           Drinks                           " << endl
         << " ";

    cout << endl
         << "Number    Item                Normal         " << endl
         << endl
         << "  19     Thums-Up              35            " << endl
         << "  20     Mountain duo          30            " << endl
         << "  21     Mazza                 35            " << endl
         << "  22     Sosyo                 25            " << endl
         << "  23     Mile                  50            " << endl
         << "  24     Chocolat Milk         80            " << endl
         << "  25     Water                 30            " << endl
         << " ";
}