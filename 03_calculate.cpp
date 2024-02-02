#include <iostream>
#include <iomanip> 
using namespace std;

int main(void)
{
    cout << " ";
    cout << "simple interest press 1 " << endl;
    cout << "gst and net bill press 2 " << endl;
    cout << "swapping values using therd variable press 3 " << endl;
    cout << "swapping values without using therd variable press 4" << endl;
    cout << " " << endl;


    int n;

    do 
    {
        cout << "enter the value of N : ";
        cin >> n;
        cout << endl;
    } while (n<1||n>4);

    if (n==1)
    {
        int amount,duration,interest;

        cout << "enter the Initial amount : ";
        cin >> amount;

        cout << "enter the Duration in years : ";
        cin >> duration;

        cout << "enter Interest rate : ";
        cin >> interest;

        float smi = (amount*(float)duration*interest)/100;

        cout << endl << "The simple interest for given data is " << smi << " rupees";

    }

    else if (n==2)
    {
        int rate,qty,amount=0;
      

        cout << "enter product rate : ";
        cin >> rate;
         
        cout << "enter product qty : ";
        cin >> qty;

        amount = qty*rate;
        float discount = (5.0*(float)amount)/100.0;
        cout << discount<<endl;
        float bill_amount=amount-(float)discount;
        float gst = (18*(float)bill_amount)/100;
        float net_bill = bill_amount + (float)gst;

        cout << endl << "Rate\tQty\tAmount     Discount\tBill amount\tGst\t  Net_bill" << endl;
        cout << rate << "\t" << qty  << "\t" << amount  << "        " << discount  << "\t  " << bill_amount << "\t        " << gst  << "\t   " << net_bill << "\t"  << endl ;

    }

    else if (n==3)
    {
        int first,second,therd;

        cout << "enter the first value : " ;
        cin >> first ;

        cout << "enter the second value : ";
        cin >> second;

        therd = first;
        first=second;
        second =therd;

        cout << "now the first value is "  << first << " and the second value is " << second << endl ;
    }

    else if (n==4)
    {
        int first,second;

        cout << "enter the first value : " ;
        cin >> first ;

        cout << "enter the second value : ";
        cin >> second;

      first = first + second ;
      second = first - second;
      first = first - second ;

         cout << "now the first value is "  << first << " and the second value is " << second << endl ;


    }


}