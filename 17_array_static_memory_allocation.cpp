#include <iostream>

using namespace std;

#define N 2

class Student
{
    int StId[100];
    string StName[100];
    int fees[100];
    // int count;  Insted of doing this you can use static variable which will count the number for you that how many time you created new objcet
    static int count; // It's default value is 0;

public:
    void Initial_values() { count = 0; }
    void getdata()
    {
        cout << endl
             << "enter student Id : ";
        cin >> StId[count];

        if (StId[count] < 1000 || StId[count] > 9999)
        {
            cout << "Invalid student Id " << endl;
            exit(0);
        }

        cin.ignore();

        cout << "enter name of student : ";
        getline(cin, StName[count]);

        cout << "enter paid fees : ";
        cin >> fees[count];

        fees[count] = 75000 - fees[count];

        count++;
    }

    void displaydata(int a)
    {
        for (int i = 0; i < a; i++)
        {
            cout << endl
                 << "Student Id             : " << StId[i] << endl;
            cout << "Student Name           : " << StName[i] << endl;
            cout << "Student remaining fees : " << fees[i] << endl
                 << " ";
        }
    }

    static void showstatic()
    {
        cout << "The value of count is " << count << endl;
        // cout << "The value of count is " << StId[count] << endl;
        // It will show the error because static function can not access not static variable
    }
};

int Student::count; // It is important to write this
                    // int Student:: count =200; // you can modify count here

int main(void)
{
    Student class1;

    class1.Initial_values();

    for (int i = 0; i < N; i++)
    {
        class1.getdata(); // Ich time getdata() is used it will counted by count variable which is static variable
                          // static variable is single entity
                          // It only store one value for all function , so all object share this varable
    }

    class1.displaydata(N);
    // Student::showstatic();  // If you want to access static variable you don't need to intialize class
}