#include <iostream>

using namespace std;

// This is a Bank_Account class which has elements of the bank account
class Bank_Account
{
protected:
     string name;
     long long int Account_Number;
     string IFSC_Code;
     double Account_Balance;
     string Password;

public:
     // this is default constructor function
     Bank_Account(){};

     // this constructor function will set the data of object
     Bank_Account(string name1, long long int Ac_number, string code, double balance, string Password1)
     {
          this->name = name1;
          Account_Number = Ac_number;
          IFSC_Code = code;
          Account_Balance = balance;
          this->Password = Password1;
     };

     // this will check the password

     int Check_password(string temp);

     // this will handle transition between two account
     void Account_to_Account(Bank_Account &client, double);

     // this function will print data of object
     void Print_data();

     // this function will do deposit operations
     void Deposit(double money);
     // this function will do deposit operations

     // this function will do withdraw operations
     void Withdraw(double money);

     // this function will make receipt of the transition
     void Make_Receipt(int, Bank_Account, double);

     // this function will check balance of Account
     void Check_Balance();
};

int main()
{
     // this is data of user in bank
     Bank_Account user[10];
     user[0] = Bank_Account{"Ansh Chovatiya", 300556477845, "SBI60459CO", 855000.45, "3009857"};    // user 1
     user[1] = Bank_Account{"Romin Maldiya", 300548556354, "SBI60459CO", 2500900.93, "3554848"};    // user 2
     user[2] = Bank_Account{"Ridham Pansuriya", 308755647854, "SBI60459CO", 95000.46, "4584940"};   // user 3
     user[3] = Bank_Account{"Vivek Morya", 30089715564974, "SBI60459CO", 15800.45, "5484353"};      // user 4
     user[4] = Bank_Account{"Vijay Sahrma", 309795564763, "SBI60459CO", 89580.45, "3458584"};       // user 5
     user[5] = Bank_Account{"Avinash Rakholiya", 309795526435, "SBI60459CO", 656580.45, "3485833"}; // user 6
     user[6] = Bank_Account{"Abhishek Savani", 309795586471, "SBI60459CO", 465280.45, "7777777"};   // user 7
     user[7] = Bank_Account{"Abhijeet Pandit", 309795585412, "SBI60459CO", 6580.45, "4584845"};     // user 8
     user[8] = Bank_Account{"Divayesh Raddiya", 309795415426, "SBI60459CO", 481280.45, "3485345"};  // user 9
     user[9] = Bank_Account{"Sujal Gajera", 309795585252, "SBI60459CO", 481280.45, "4383438"};      // user 10

     int n;

     do
     {
          cout << endl
               << "-------------------------------------------------------------------------" << endl
               << " ";

          cout
              << endl
              << "Check Balance enter 1\n"
              << endl;
          cout << "Deposit money enter 2 \n"
               << endl;
          cout << "Withdraw money enter 3\n " << endl;
          cout << "Transfer money enter 4 \n"
               << endl;
          cout << "Exit enter 0 " << endl
               << " ";
          cout << endl
               << "-------------------------------------------------------------------------" << endl
               << " ";
          cout << endl
               << "Enter the Number : ";
          cin >> n;

          if (n == 0)
          {
               goto end;
          }
          else if (n > 4 || n < 0)
          {
               cout << endl
                    << "Invalid Number ! " << endl
                    << " ";
               goto end;
          }

          int v;
          cout << endl
               << "Enter your User number : ";
          cin >> v;

          if (v < 1 || v > 10)
          {
               cout << endl
                    << "Invalid User Number !" << endl
                    << " ";
               goto end;
          }

          else
          {
               // this condition will check password
               string pass;

               cout << endl
                    << "Entere your Password : ";
               cin >> pass;

               int Check1 = user[v - 1].Check_password(pass);

               if (Check1 == 0)
               {
                    goto end;
               }
          }

          if (n == 1)
          {
               // this section is for checking bank balance
               user[v - 1].Check_Balance();
               user[v - 1].Make_Receipt(n, user[v - 1], 0);
          }

          else if (n == 2)
          {
               // this section is for depositing money from bank account
               double Amount;
               cout << endl
                    << "Enter the amount : ";
               cin >> Amount;
               user[v - 1].Deposit(Amount);
               user[v - 1].Make_Receipt(n, user[v - 1], Amount);
          }

          else if (n == 3)
          {
               // this section is for withdrawing money from bank account
               double Amount;
               cout << endl
                    << "Enter the amount : ";
               cin >> Amount;
               user[v - 1].Withdraw(Amount);
               user[v - 1].Make_Receipt(n, user[v - 1], Amount);
          }
          else if (n == 4)
          {
               // this section is for transferring money account to account
               int client;

               cout << endl
                    << "To which user you want to transfer money : ";
               cin >> client;

               if (client < 1 || client > 10)
               {
                    cout << endl
                         << "Invalid User Number !" << endl
                         << " ";
                    goto end;
               }

               double Amount;
               cout << endl
                    << "Enter the amount : ";
               cin >> Amount;
               user[v - 1].Account_to_Account(user[client - 1], Amount);
               user[v - 1].Make_Receipt(n, user[client - 1], Amount);
          }

     end:
          cout << endl
               << "Session  is complete" << endl;

     } while (n != 0);
}

// this will handle transition between two account
void Bank_Account ::Account_to_Account(Bank_Account &client, double money)
{

     if (money <= 0)
     {
          cout << endl
               << "Invalid Input " << endl
               << " ";
     }
     else
     {
          Account_Balance -= money;
          client.Account_Balance += money;

          cout << endl
               << "The money has been transferred " << name << " to " << client.name << " " << endl
               << " ";
          cout << endl
               << "Current Status  " << endl
               << " ";
          Print_data();
     }
}

// this function will make receipt of the transition
void Bank_Account ::Make_Receipt(int a, Bank_Account client, double amount1 = 0)
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

     // this method will convert string IFSC_CODE to array of characters
     char Code[100];
     int t = 0;
     while (IFSC_Code[t] != '\0')
     {
          Code[t] = IFSC_Code[t];
          t++;
     }
     Code[t] = '\0';

     char Cname[100];
     int u = 0;
     while (client.name[u] != '\0')
     {
          Cname[u] = client.name[u];
          u++;
     }
     Cname[u] = '\0';

     char CName[100];
     int ou = 0;
     while (name[ou] != '\0')
     {
          CName[ou] = name[ou];
          ou++;
     }
     Cname[ou] = '\0';

     // this will make a file and store data in it
     FILE *ptr1;
     ptr1 = fopen("Receipt.txt", "w");
     fprintf(ptr1, "________________________________RECEIPT________________________________\n");

     if (a == 1)
     {
          fprintf(ptr1, "\nHello %s , here is details of your Account\n", Cname);
     }
     else if (a == 2)
     {
          fprintf(ptr1, "\nThe Amount of %.2lf Rs. has Been Deposited by user %s\n \nCurrent Status\n", amount1, Cname);
     }
     else if (a == 3)
     {
          fprintf(ptr1, "\nThe Amount %.2lf Rs. has Been Withdrawn by %s\n \nCurrent Status\n", amount1, Cname);
     }
     else if (a == 4)
     {
          fprintf(ptr1, "\nThe Amount %.2lf Rs. has Been transferred by %s to %s \n \nCurrent Status\n", amount1, CName, Cname);
     }

     fprintf(ptr1, "\nName            : %s\n", Name);
     fprintf(ptr1, "Account Number  : %lld\n", Account_Number);
     fprintf(ptr1, "IFSC code       : %s\n", Code);
     fprintf(ptr1, "Account Balance : %.2f\n", Account_Balance);
     fprintf(ptr1, "\n_______________________________________________________________________\n");
     fclose(ptr1);
}

// this function will do withdraw operations
void Bank_Account ::Withdraw(double money)
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
               << "The Amount of Rs. " << money << " has been Withdrawn by " << name << endl
               << " ";

          cout << endl
               << "Current Status  " << endl
               << " ";
          Print_data();
     }
}

void Bank_Account ::Deposit(double money)
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
               << "The Amount of Rs. " << money << " has been Deposited by " << name << endl
               << " ";
          cout << endl
               << "Current Status " << endl
               << " ";
          Print_data();
     }
}

// this function will print data of object
void Bank_Account ::Print_data()
{
     cout << endl
          << "Name            : " << name << endl
          << "Account Number  : " << Account_Number << endl;
     cout << "IFSC code       : " << IFSC_Code << endl;
     cout << "Account Balance : " << Account_Balance << endl
          << " ";
}

void Bank_Account ::Check_Balance()
{

     cout << endl
          << "Hello " << name << ", here is details of your Account" << endl
          << " ";
     Print_data();
}

int Bank_Account ::Check_password(string temp)
{
     if (temp != Password)
     {
          cout << endl
               << "Invalid Password ! " << endl
               << " ";
          return 0;
     }
     return 1;
}