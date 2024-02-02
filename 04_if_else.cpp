#include <iostream>

using namespace std;

int main(void)
{
    cout << endl;
    cout << "find smallest value press 1 " << endl;
    cout << "positive or nagative  press 2 " << endl;
    cout << "divisable by 3 or 5  press 3 " << endl;
    cout << "student pass or fail press 4" << endl;
    cout << "leap year or not press 5" << endl;
    cout << "find largest value among three press 6 " << endl;
    cout << " " << endl;

    int n;

    do
    {
        cout << "Enter the value of N : ";
        cin >> n;
        cout << endl;
    } while (n < 1 || n > 6);

    if (n == 1)
    {
        int first, second;

        cout << "Enter the first value : ";
        cin >> first;

        cout << "Enter the second value : ";
        cin >> second;

        if (first < second)
        {
            printf("%d is smallest value\n", first);
        }

        else if (second < first)
        {
            printf("%d is smallest value\n", second);
        }

        else
        {
            cout << first << " and " << second << " are equal values " << endl;
        }
    }

    else if (n == 2)
    {
        int number;

        printf("Enter the number : ");
        scanf("%d", &number);

        if (number < 0)
            cout << "The number is nagative " << endl;
        else if (number > 0)
            cout << "The number is positive " << endl;
        else
            cout << "The number is zero" << endl;
    }

    else if (n == 3)
    {
        int number;

        cout << "Enter the number : ";
        cin >> number;

        if (number % 3 == 0)
            cout << "The number is divisible by 3" << endl;
        else if (number % 5 == 0)
            cout << "The number is divisible by 5 " << endl;
        else
            cout << "The number is not divisible by neither 3 or 5" << endl;
    }

    else if (n == 4)
    {
        int subject, total = 0;
        float percentage;

        cout << "Enter the total subjects : ";
        cin >> subject;

        int marks[subject];

        cout << endl;

        for (int i = 0; i < subject; i++)
        {
            cout << "Enter the marks of subject " << i + 1 << " : ";
            cin >> marks[i];
            total += marks[i];
        }

        cout << "The total marks of student is " << total << endl;
        percentage = (float)total / subject;
        cout << "The total percentage of student is " << percentage << endl;

        if (percentage >= 35)
            cout << "Student is Passed" << endl;
        else
            cout << "Student is failed" << endl;
    }

    else if (n == 5)
    {
        int year;

        cout << "Enter the year : ";
        cin >> year;

        if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
        {
            cout << "The year is leap year " << endl;
        }
        else
        {
            cout << "The year is not leap year" << endl;
        }
    }

    else if (n == 6)
    {
        int a, b, c;

        cout << "Enter the first value : ";
        cin >> a;

        cout << "Enter the second value : ";
        cin >> b;

        cout << "Enter the third value : ";
        cin >> c;

        if (a > b && a > c)
            cout << "Largest number is " << a << endl;
        else if (b > a && b > c)
            cout << "Largest number is " << b << endl;
        else if (c > a && c > b)
            cout << "Largest number is " << a << endl;
    }
}