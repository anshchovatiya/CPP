// Example of nested structure

#include <iostream>
#include <string.h>

using namespace std;

// Define a nested structure for student marks
typedef struct student
{
    int roll_num;
    string name;

    // Define a nested structure for subject marks
    typedef struct marks
    {
        float mark;
    } sub;

    sub maths, sceince, chemistry;

    int total;
    float percentage;
} stu;

int main()
{

    int n;

    cout << endl << "Enter the number of students: ";
    cin >> n;

    stu student[n];

    for (int i = 0; i < n; i++)
    {

        // Prompt for student roll number and name
getchar();
        cout << endl
             << "Enter the name of a student : ";
        getline(cin, student[i].name);
        cout << "Enter the roll number of strudent : ";
        cin >> student[i].roll_num;
        // Prompt for subject marks
        cout << "enter the marks of maths : ";
        cin >> student[i].maths.mark;
        cout << "enter the marks of sceince : ";
        cin >> student[i].sceince.mark;
        cout << "enter the marks of chemistry : ";
        cin >> student[i].chemistry.mark;

        // Calculate total marks
        student[i].total = student[i].maths.mark + student[i].sceince.mark + student[i].chemistry.mark;

        // Calculate percentage
        student[i].percentage = (float)student[i].total / 3.0;
    }
    for (int i = 0; i < n; i++)
    {

        // Display student details
        cout << endl
             << "The name of student is " << student[i].name << endl;
        cout << "The Roll number of student is " << student[i].roll_num << endl;
        cout << "The total marks of student is " << student[i].total << endl;
        cout << "The percentage of student is " << student[i].percentage << endl;
    }

    return 0;
}