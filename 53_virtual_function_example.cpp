#include <iostream>

using namespace std;

// this is base class which is representing a Coder
class Coder
{
    int Coder_Id;
    string Name;

public:
    // this is constructor function who will take argument and save it in class elements
    Coder(int a, string b) : Coder_Id(a), Name(b){};

    // this is virtual function which will work if there is no function like this defined in derived classes
    virtual void Display()
    {
        cout << endl
             << "Coder id        : " << Coder_Id << endl;
        cout
            << "Name            : " << Name << endl;
        };
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

    // this is display function who will display all data of base class and derived class
    void Display()
    {
        Coder ::Display();
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

    // this is display function who will display all data of base class and derived class
    void Display()
    {
        Coder ::Display();
        cout << "Coding language : " << Coding_languages << endl;
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





