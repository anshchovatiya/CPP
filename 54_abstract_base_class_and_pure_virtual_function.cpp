#include <iostream>

/*


Pure virtual function

-> pure virtual function is specially used to never run the function
-> pure virtual function will never run , It will force user to over write function in derived class


-------------------------------------------------------------------------------------------------------------------------------------

Abstract Base Class

-> Abstract Base Class is that class which we created for derived class. we know that we will never use this class to make objects
   because this class is created for making derived classes.

-> this class is specially created to overwritten by derived classes.

-> It is used when we want to use only derived class to create objects

Definition

-> Abstract base class is that class who has at least one pure virtual function



*/

using namespace std;

// this is base class which is representing a Coder
class Coder
{
    int Coder_Id;
    string Name;

public:
    // this is constructor function who will take argument and save it in class elements
    Coder(int a, string b) : Coder_Id(a), Name(b){};

    // this is pure virtual function which is created for do nothing and force user to overwrite this function in derived class
    virtual void Display() = 0;
};

// this is derived class from Coder which is representing Frontend Developer
class Frontend_Developer : public Coder
{
    string Coding_languages;
    int Experience;

public:
    // this is constructor function of derived class who will take argument and pass the arguments to it's class elements and base class constructor
    Frontend_Developer(int id, string name, string languages, int exp) : Coder(id, name)
    {
        Coding_languages = languages;
        Experience = exp;
    };

    // this is display function who will overwrite display function of Coder class and print data of Frontend developer
    void Display()
    {
        cout << "Coding language : " << Coding_languages << endl;
        cout << "Experience      : " << Experience << endl
             << "type            : Frontend Developer" << endl
             << " ";
    }
};

class Backend_Developer : public Coder
{
    string Coding_languages;
    int Experience;

public:
    // this is constructor function of derived class who will take argument and pass the arguments to it's class elements and base class constructor
    Backend_Developer(int id, string name, string languages, int exp) : Coder(id, name)
    {
        Coding_languages = languages;
        Experience = exp;
    };

    // this is display function who will overwrite display function of Coder class and print data of Backend developer
    void Display()
    {

        cout << endl
             << "Coding language : " << Coding_languages << endl;
        cout << "Experience      : " << Experience << endl
             << "type            : Backend Developer" << endl
             << " ";
    }
};

int main(void)
{
    // Pointer to base class
    Coder *ptr;

    // Object of derived class
    Frontend_Developer an(53, "ansh chovatiya", "C,C++", 5);

    // Pointing base class pointer to derived class object
    ptr = &an;

    // calling Display function of derived class because Display function of base class is virtual function
    ptr->Display();

    // Object of derived class
    Backend_Developer rom(33, "nayan chovatiya", "C,C++", 1);

    // Pointing base class pointer to derived class object
    ptr = &rom;

    // calling Display function of derived class because Display function of base class is virtual function
    ptr->Display();
}
