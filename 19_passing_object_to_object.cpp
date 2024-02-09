#include <iostream>

using namespace std;

class Name
{
private:

    string name;
    int marks[3];
    int total;
    float percentage;

public:
    // declaration of all function
    Name(void);
    void set_data_by_sum(Name n1, Name n2);
    void print_data();
};

int main(void)
{
    Name stu1, stu2, total;

    stu1.print_data();
    stu2.print_data();

    total.set_data_by_sum(stu1, stu2);

    total.print_data();
}






// this is constuctor function that is automatically awekand when ovjects were created
Name ::Name(void)
{
    total = 0;

    cout << endl
         << "Enter your name : ";
    getline(cin, name);
    for (int i = 0; i < 3; i++)
    {
        cout << "Enter marks of sub " << i + 1 << " : ";
        cin >> marks[i];
        total += marks[i];
    }

    percentage = (float)total / 3.0;
    cin.ignore();
}

// this function will set sum of to class to selected class
void Name::set_data_by_sum(Name n1, Name n2)
{
    name = n1.name + " " + n2.name;
    marks[0] = n1.marks[0] + n2.marks[0];
    marks[1] = n1.marks[1] + n2.marks[1];
    marks[2] = n1.marks[2] + n2.marks[2];
    total = n1.total + n2.total;
    percentage = n1.percentage + n2.percentage;
}

// this function will print all collected data
void Name::print_data()
{
    cout << endl
         << "Name        : " << name << endl;
    cout << "Total marks : " << total << endl;
    cout << "Percentage  : " << percentage << endl
         << " ";
}
