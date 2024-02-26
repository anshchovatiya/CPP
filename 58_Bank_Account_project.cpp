#include <iostream>

using namespace std;

class Bank_Account
{
protected:
    double Account_Number;
    string IFSC_Code;
    float Account_Balance;

public:

    Bank_Account(){};
    Bank_Account(double Ac_number, string code, float balance)
    {
        Account_Number = Ac_number;
        IFSC_Code = code;
        Account_Balance = balance;
    };

    void Print_data()
    {
        cout << endl
             << "Account Number  : " << Account_Number << endl;
        cout << "IFSC code       : " << IFSC_Code << endl;
        cout << "Account Balance : " << Account_Balance << endl;
    }
    void Deposit(float money)
    {
        if (money <= 0)
        {
            cout << "INVALID AMOUNT";
        }
        else
        {
            Account_Balance += money;
            Print_data();
        }
    }
    void Balance()
    {
        Print_data();
    }

    void Withdraw(float money)
    {
        if (money <= 0)
        {
            cout << "INVALID AMOUNT";
        }

        else if (money > Account_Balance)
        {
            cout << "INSUFFICIENT BALANCE";
        }

        else
        {
            Account_Balance -= money;
            Print_data();
        }
    }
};

int main()
{

    Bank_Account user[5];

    user[0] = Bank_Account{300897877845,"SBI60459CJ",85000.45};
    user[1] = Bank_Account{300897858354,"SBI60459CJ",25000.93};
    user[2] = Bank_Account{300897877854,"SBI60459CJ",95000.46};
    user[3] = Bank_Account{300897871974,"SBI60459CJ",158600.45};
    user[4] = Bank_Account{300897819763,"SBI60459CJ",89580.45};


    



}