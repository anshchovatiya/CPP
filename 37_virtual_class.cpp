#include <iostream>

using namespace std;

// If we want to creat heirarachical or hybrid inheritance we will need virtual base class


// this is base class student
// It is virtual base class
class Student
{
protected:
    int roll_number;

public:
    void get_roll_number(int);
    void print_roll_number();
};


// this is derived class Exam and it's base class is Student

/* Student is declared virtual becuase two derived class is using same variables and
         If we use both of them together there wiil be two copies of roll_num so we need do declar it as virtual base class*/
class Exam : protected virtual Student
{
protected:
    float maths, science, chemistry;

public:
    void get_marks(float, float, float);
    void print_marks();
};


// this is derived class Sports and it's base class is Student
/* Student is declared virtual becuase two derived class is using same variables and
         If we use both of them together there wiil be two copies of roll_num so we need do declar it as virtual base class*/
class Sport : virtual protected Student
{
protected:
    int Pt_score;

public:
    void get_Pt_score(float);
    void print_Pt_score();
};


// this is derived class Result and it's base class is Exam and Sports
class Result : protected Exam, protected Sport
{
    protected :
    float total,percentage;

public:
    void get_data(int r, float a1, float a2, float a3, int pt)
    {
        get_roll_number(r);
        get_marks(a1, a2, a3);
        get_Pt_score(pt);
    }

    void calculate()
    {
        total = maths+science+chemistry;
        percentage = total/3;
    }
    void print_data()
    {
        print_roll_number();
        print_marks();
        print_Pt_score();
        calculate();
        
        cout << "total      : " <<total << endl;
        cout << "percentage : " <<percentage<< endl << " ";
    }
};

void Student ::get_roll_number(int a)
{
    roll_number = a;
}

void Student ::print_roll_number()
{
    cout << endl
         << "Roll No    : " << roll_number << endl;
}

void Exam ::get_marks(float a1, float a2, float a3)
{
    maths = a1;
    science = a2;
    chemistry = a3;
}

void Exam ::print_marks()
{
    cout << "Maths      : " << maths << endl;
    cout << "Science    : " << science << endl;
    cout << "Chemistry  : " << chemistry << endl;
  
}

void Sport ::get_Pt_score(float a1)
{
    Pt_score = a1;
}
void Sport ::print_Pt_score()
{
    cout << "Pt Score   : " << Pt_score << endl ;
}


int main(void)
{
    Result ansh;

    //now Result's object has access to Exam class and sports class
    ansh.get_data(5,90.09,98.90,96.98,85.64);
    ansh.print_data();
}