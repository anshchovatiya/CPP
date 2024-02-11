// --- friend function ---

//      If you want give access of private data of class to function who is not class member
//   you can declar that function as a friend function to have access of class.

// --> friend function is not in the scope of class
// --> It cannot be called from object you have to call it as single entity
// --> It usually take objects as arguments
// --> It can not access data directly by their names, you need to give them objects as arguments

#include <iostream>

using namespace std;

class Coder;

// this class will combine two object and make custom datatype to return values
class reto
{
    string Name;
    float Exeperience;
    string Roll_In_Job;
    friend reto Get_Data(Coder, Coder);
    friend void print_data(reto a);
};

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

    Coder(int a) // this is overloading constructor function
    {
        a = 0;
    }

    friend reto Get_Data(Coder a, Coder b);
    // friend function declaration
    friend void print_data(Coder a);
};

int main(void)
{
    Coder emp1, emp2;

    // calling friend function to sum the data
    reto emp3 = Get_Data(emp1, emp2);

    print_data(emp3);

    // calling friend function to print the data
}

// function to sum the data,return type Class Coder
reto Get_Data(Coder a, Coder b)

// giving two arguments which is objects
{
    reto both;
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

// this is overloading function
void print_data(reto a)
{
    cout << endl
         << "Name        : " << a.Name << endl;
    cout << "Exeperience : " << a.Exeperience << endl;
    cout << "Roll In Job : " << a.Roll_In_Job << endl
         << " ";
}