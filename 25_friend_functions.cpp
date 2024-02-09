// --- friend function ---

//      If you want give access of private data of class to function who is not class member
//   you can declar that function as a friend function to have access of class.

// --> friend function is not in the scope of class
// --> It cannot be called from object you have to call it as single entity
// --> It usually take objects as arguments
// --> It can not access data directly by their names, you need to give them objects as arguments

#include <iostream>

using namespace std;

class Coder
{
    string Name;
    float Exeperience;
    string Roll_In_Job;

public:
    Coder()
    {
        cout << endl
             << "Name       : ";
        getline(cin, Name);

        cout << "Experience : ";
        cin >> Exeperience;

        cin.ignore();
        cout << "Your Roll  : ";
        getline(cin, Roll_In_Job);
    }

    friend Coder Get_Data(Coder a, Coder b);
    // friend function declaration
    friend void print_data(Coder a);
};

int main(void)
{
    Coder emp1, emp2;
    // --> two objects created
    // print_data(emp1);
    // print_data(emp2);

    // calling friend function to sum the data
    Coder emp3 = Get_Data(emp1, emp2);
    // calling friend function to print the data
    print_data(emp3);
}

// function to sum the data
Coder Get_Data(Coder a, Coder b)
// return type Class Coder
// giving two arguments which is objects
{
    Coder both;
    both.Name = a.Name + " and " + b.Name;
    both.Exeperience = a.Exeperience + b.Exeperience;
    both.Roll_In_Job = a.Roll_In_Job + " and " + b.Roll_In_Job;

    return both;
}

// friend function to print the data
void print_data(Coder a)
{
    cout << endl
         << "Name        : " << a.Name << endl;
    cout << "Exeperience : " << a.Exeperience << endl;
    cout << "Roll In Job : " << a.Roll_In_Job << endl
         << " ";
}