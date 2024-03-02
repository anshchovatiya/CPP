#include <iostream> // Standard input/output library
#include <cstring>  // String manipulation library
#include <iomanip>  // Stream formatting library

using namespace std;

void print_menu(); // Function prototype for printing the menu


struct Answer // Structure to store the answer to a question
{
    string dish_name = ""; // Name of the dish
    double dish_price;      // Price of the dish
    int qty;               // Quantity of the dish
    double total;           // Total price of the dish
};

class Item // Class to represent an item on the menu
{
public:
    string Item_name = ""; // Name of the item
    double Item_price;     // Price of the item

public:
    Item(){};

    Item(string name, double price) // Constructor for the class
    {
        Item_name = name;
        Item_price = price;
    }

    Answer Calculator(int qty) // Function to calculate the total price of an item
    {
        Answer result;

        result.dish_name = Item_name;

        result.dish_price = Item_price;
        result.qty = qty;
        result.total = Item_price * qty;

        return result;
    }

    void print_Item_data() // Function to print the data of an item
    {
        cout << endl
             << "Item Name : " << Item_name << endl;
        cout << "Item Price : " << Item_price;
    }
};

int main()
{
    Item item[26]; // Array of items

    item[1] = Item("Panner Pakoda", 220); // Initialize the first item
    item[2] = Item("Palak Paneer ", 170);
    item[3] = Item("Veg Burger ", 110);
    item[4] = Item("Veg Grill Sandwich", 160);
    item[5] = Item("Veg Fry rice", 160);
    item[6] = Item("Veg Biryani", 350);
    item[7] = Item("Mix Veg Pizzah", 450);
    item[8] = Item("Jeera Rice", 160);
    item[9] = Item("Potato Cheeps", 80);
    item[10] = Item("Masala Dosa", 90);
    item[11] = Item("Momos:", 90);
    item[12] = Item("Franki", 140);
    item[13] = Item("Sweet Corn", 110);
    item[14] = Item("Gulab Jamun", 60);
    item[15] = Item("Kulfi", 40);
    item[16] = Item("Vanila Ice-Cream", 70);
    item[17] = Item("Chocolate Ice_Cream", 110);
    item[18] = Item("Chocolate cake", 500);
    item[19] = Item("Thums-Up", 35);
    item[20] = Item("Mountain Duo", 30);
    item[21] = Item("Maza", 35);
    item[22] = Item("Sosayo", 25);
    item[23] = Item("Milk", 50);
    item[24] = Item("Chocolate Milk", 80);
    item[25] = Item("Water", 30);

    int Choise; // Variable to store the user's choice
    int count = 0; // Variable to keep track of the number of items ordered

    Answer ItemNo[20]; // Array of answers

    do
    {
    start:
        cout << endl
             << "*************************************************************************************************************************************************************************************************************************************************************"
             << endl
             << " ";

        cout << endl
             << "For Menu Press 1 " << endl;
        cout << "Oreder Dish Press 2 " << endl;
        cout << "current Status Press 3 " << endl;
        cout << "Make Bill press 4 " << endl;
        cout << "Exit Press 0 " << endl;

        cout << endl
             << "*************************************************************************************************************************************************************************************************************************************************************"
             << endl
             << " ";

        cout << endl
             << "Enter Your Choise : ";
        cin >> Choise;

        cout << endl
             << "*************************************************************************************************************************************************************************************************************************************************************"
             << endl
             << " ";

        if (Choise < 0 || Choise > 4)
        {
            cout << endl
                 << "Invalid Input !" << endl;
            goto start;
        }
        else if (Choise == 0)
        {
            goto end;
        }

        else if (Choise == 1)
        {
            print_menu();
        }

        else if (Choise == 2)
        {

            int Dish_Number;
            cout << endl
                 << "Enter Dish Number : ";
            cin >> Dish_Number;

            if (Dish_Number > 25 || Dish_Number < 1)
            {
                cout << endl
                     << "Invalid Input !" << endl;
                goto start;
            }

            int QTY;

            cout << endl
                 << "Enter Qty : ";
            cin >> QTY;

            if (QTY < 1)
            {
                cout << endl
                     << "Invalid Input !" << endl;
                goto start;
            }

            ItemNo[count] = item[Dish_Number].Calculator(QTY);
            count++;
        }

        else if (Choise == 3)
        {
        cout << endl
                 << "NO           Name             qty             price             Amount  " << endl
                 << " ";


            for (int i = 0; i < count; i++)
            {
                cout << endl
                     << i + 1 << "  "
                     << setw(18) << ItemNo[i].dish_name << "        " << setw(3) << ItemNo[i].qty << "             " << setw(5) << ItemNo[i].dish_price << "           " << setw(8) << ItemNo[i].total;
            }

            cout << " " << endl;
        }

        else if (Choise == 4)
        {
            double total = 0;
            cout << endl
                 << "NO                 Name              qty             price             Amount  " << endl
                 << " ";

            for (int i = 0; i < count; i++)
            {
                cout << endl
                     << i + 1 << "  "
                     << setw(25) << ItemNo[i].dish_name << "        " << setw(3) << ItemNo[i].qty << "             " << setw(5) << ItemNo[i].dish_price << "           " << setw(8) << ItemNo[i].total;
                total += ItemNo[i].total;
            }
            cout << endl << endl
                 << "--------------------------------------------------------------------------------"
                 << " ";

            cout << endl
                 << "                "
                 << "  Total  "
                 << "                                                " << total << endl;
        }

    end:

        cout
            << " ";

    } while (Choise > 0 & Choise < 5);

    return 0;
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
         << "Number     Item                Normal           " << endl
         << endl
         << "  1      Paneer Pakoda          220             " << endl
         << "  2      Palak Paneer           170             " << endl
         << "  3      Veg Burger             110             " << endl
         << "  4      Veg Grill  Sandwich    160             " << endl
         << "  5      Veg Fry rice           160             " << endl
         << "  6      Veg Biryani            350             " << endl
         << "  7      Mix Veg Pizzah         450             " << endl
         << "  8      Jeera Rice             160             " << endl
         << "  9      Potato Cheeps          80              " << endl
         << "  10     Masala Dosa            90              " << endl
         << "  11     Momos                  90              " << endl
         << "  12     Franki                 140             " << endl
         << "  13     Sweet Corn             110             " << endl
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