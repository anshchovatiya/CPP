#include <iostream>
#include <fstream>

using namespace std;

// This is a Bank_Account class which has elements of the bank account
class Bank_Account
{
protected:
     string name;
     long long int Account_Number;
     string IFSC_Code;
     double Account_Balance;

public:
     // this is default constructor function
     Bank_Account(){};

     // this constructor function will set the data of object
     Bank_Account(string name, long long int Ac_number, string code, double balance)
     {
          this->name = name;
          Account_Number = Ac_number;
          IFSC_Code = code;
          Account_Balance = balance;
     };

     // this function will print data of object
     void Print_data()
     {
          cout << endl
               << "Name            : " << name << endl
               << "Account Number  : " << Account_Number << endl;
          cout << "IFSC code       : " << IFSC_Code << endl;
          cout << "Account Balance : " << Account_Balance << endl
               << " ";
     }

     // this function will do deposit operations
     void Deposit(double money)
     {
          if (money <= 0)
          {
               cout << endl
                    << "INVALID AMOUNT !" << endl
                    << " ";
          }
          else
          {
               Account_Balance += money;
               cout << endl
                    << "Money has been Deposited" << endl
                    << " ";
               cout << endl
                    << "Current Status " << endl
                    << " ";
               Print_data();
          }
     }

     // this function will do deposit operations
     void Withdraw(double money)
     {
          if (money <= 0)
          {
               cout << endl
                    << "INVALID AMOUNT !" << endl
                    << " ";
          }

          else if (money > Account_Balance)
          {
               cout << endl
                    << "INSUFFICIENT BALANCE !" << endl
                    << " ";
          }

          else
          {
               Account_Balance -= money;
               cout << endl
                    << "Money has been Withdrawn" << endl
                    << " ";

               cout << endl
                    << "Current Status  " << endl
                    << " ";
               Print_data();
          }
     }

     // this function will make receipt of the transition
     void Make_Receipt(int a, double amount1 = 0)
     {
          // this method will convert string name to array of characters
          char Name[100];
          int i = 0;
          while (name[i] != '\0')
          {
               Name[i] = name[i];
               i++;
          }
          Name[i] = '\0';

          // this method will convert string name to array of characters
          char Code[100];
          int t = 0;
          while (IFSC_Code[t] != '\0')
          {
               Code[t] = IFSC_Code[t];
               t++;
          }
          Code[t] = '\0';

          // this will make a file and store data in it
          FILE *ptr1;
          ptr1 = fopen("Receipt.txt", "w");
          fprintf(ptr1, "________________________________RECEIPT________________________________\n");

          if (a == 1)
          {
               fprintf(ptr1, "\nCurrent Status\n");
          }
          else if (a == 2)
          {
               fprintf(ptr1, "\nThe Amount of %.2lf Rs. has Been Deposited\n \nCurrent Status\n", amount1);
          }
          else if (a == 3)
          {
               fprintf(ptr1, "\nThe Amount %.2lf Rs. has Been Withdrawn \n \nCurrent Status\n", amount1);
          }

          fprintf(ptr1, "\nName            : %s\n", Name);
          fprintf(ptr1, "Account Number  : %lld\n", Account_Number);
          fprintf(ptr1, "IFSC code       : %s\n", Code);
          fprintf(ptr1, "Account Balance : %.2f\n", Account_Balance);
          fclose(ptr1);
     }
};

int main()
{
     // this is data of user in bank
     cout << endl
          << "-------------------------------------------------------------------------" << endl
          << " ";
     Bank_Account user[5];
     user[0] = Bank_Account{"Ansh Chovatiya", 300556477845, "SBI60459CO", 85000.45};
     user[1] = Bank_Account{"Romin Maldiya", 300548556354, "SBI60459CO", 250000.93};
     user[2] = Bank_Account{"Ridham Pansuriya", 308755647854, "SBI60459CO", 95000.46};
     user[3] = Bank_Account{"Vivek Morya", 30089715564974, "SBI60459CO", 158600.45};
     user[4] = Bank_Account{"Vijay Shrma", 309795564763, "SBI60459CO", 89580.45};

     int n;

     do
     {

          cout
              << endl
              << "Check Balance enter 1" << endl;
          cout << "Deposit money enter 2 " << endl;
          cout << "Withdraw money enter 3 " << endl;
          cout << "Exit enter 0 " << endl
               << " ";

          cout << endl
               << "Enter the Number : ";
          cin >> n;

          if (n == 0)
          {
               goto end;
          }
          if (n > 3 || n < 0)
          {
               cout << endl
                    << "Invalid Number ! " << endl
                    << " ";
               goto end;
          }

          int v;
          cout << endl
               << "Enter the User number : ";
          cin >> v;

          if (v < 1 || v > 5)
          {
               cout << endl
                    << "Invalid User Number !" << endl
                    << " ";
               goto end;
          }

          if (n == 1)
          {
               user[v - 1].Print_data();
               user[v - 1].Make_Receipt(1);
          }

          else if (n == 2)
          {
               double Amount;
               cout << endl
                    << "Enter the amount : ";
               cin >> Amount;
               user[v - 1].Deposit(Amount);
               user[v - 1].Make_Receipt(2, Amount);
          }

          else if (n == 3)
          {
               double Amount;
               cout << endl
                    << "Enter the amount : ";
               cin >> Amount;
               user[v - 1].Withdraw(Amount);
               user[v - 1].Make_Receipt(3, Amount);
          }

     end:
          cout << endl
               << "Session  is complete" << endl;

          cout << endl
               << "-------------------------------------------------------------------------" << endl
               << " ";
     } while (n != 0);
}
