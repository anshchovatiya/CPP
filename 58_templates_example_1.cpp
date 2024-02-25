#include <iostream>
using namespace std;

// default arguments in template
template <class y=int,class t=int>  
// function will take default y as float and t as float
    // but if you use different type of data on time of function call it will take that type of data
void swop(y &num1,t &num2)
{
    y temp = num1;
    num1=num2;
    num2=temp;
}


/* template is nothing but data type who assign variable to template name all at once.
  so you don't need to creat separate function for doing same task for different types of data types */

template <class y=float,class t=float>  
// this is student class who stores students data
class Student{
    string name;
    y marks[5];
    t total;
    t percentage;

public:

    // constructor function to receive necessary data
        Student()
    {
        total = 0;
        cout << endl
             << "Enter name of Student : ";
        getline(cin, name);
        for (int i = 0; i < 5; i++)
        {
            cout << "Enter the marks of subject " << i + 1 << " : ";
            cin >> marks[i];
            total += marks[i];

            // this is condition to check if marks is valid or not
            if(marks[i]<0||marks[i]>100)
            {
                cout <<  endl << "Invalid Marks!" <<endl <<  " ";
                exit(0);
            }
        }
            getchar();
            percentage = (total * 100) / 500;
    }


    // print function to print student's data
    void print_data()
    {
        cout << endl
             << "Name        : " << name << endl;
        cout << "Total marks : " << total << endl;
        cout << "Percentage  : " << percentage << endl
             << " ";
    }
};







int main()
{   
    // here template is int so y will receive int value and all variables who are declared with "y" will now be int and all variables who are declared with "t" will now be float 
    Student <int,float> student1;
    // here template is int so y will receive int value and all variables who are declared with "y" will now be int and all variables who are declared with "t" will now be double
    Student <float,double> student2;
    // function to print data of student 1 
    student1.print_data();
    // function to print data of student 2
    student2.print_data();
    
    float a=35.5,b=23.82;
    swop(a,b);
    cout << endl << "The value of a is " << a << " and the value of b is " << b << endl << " ";
}
