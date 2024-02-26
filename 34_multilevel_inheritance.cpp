#include <iostream>

using namespace std;

// this is base class Student
class Student
{
protected:
    string name;
    int Student_Id;

public:
    void get_data(string, int);
    
};

// this is inherited calss Exam whoms base class is Student
class Exam : protected Student
{
protected:
    float Maths, Science, Chemistry;

public:
    void set_marks(float, float, float);
    void print_marks();
};

// Exam is base class for result

// this is inherited class Result whoms base class is Exam
class Result : protected Exam
{
public:
    float total;
    float percentage;
    void calculate();
    void Display();
    void data_marks(string,int,float,float,float);
};

// Stundent --> Exam --> Result  --> It is inheritance path




int main(void)
{
    Result ansh;
    ansh.data_marks("ansh chovatiya",3,90.96,89.79,89.80);
    ansh.calculate();
    ansh.Display();
}

void Student ::get_data(string v, int b)
{
    name = v;
    Student_Id = b;
}

void Student ::print_data()
{
    cout << endl
         << "Name            : " << name << endl;
    cout << "Student Id      : " << Student_Id << endl;
}

void Exam ::set_marks(float f1, float f2, float f3)
{
    Maths = f1;
    Science = f2;
    Chemistry = f3;
}

void Exam ::print_marks()
{
    cout << "Maths marks     : " << Maths << endl;
    cout << "Science marks   : " << Science << endl;
    cout << "Chemistry marks : " << Chemistry << endl;
}

void Result ::calculate()
{
    total = Maths + Science + Chemistry;
    percentage = total / 3.0;
}

void Result ::Display()
{
    print_data();
    print_marks();

    cout << "Total marks     : " << total << endl;
    cout << "Percentage      : " << percentage << endl
         << " ";
}

// this function will give values to other classes function becuase they are protected
void Result:: data_marks(string a,int b,float c,float d,float e)
{
    get_data(a, b);
    set_marks(c,d, e); 
}