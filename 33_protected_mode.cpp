#include <iostream>

using namespace std;

/*--> protected mode will only accessable by class it self and inherited class ,
        so if you want to creat elements who is private but accessable by inherited class you can write in protected mode*/


class coder
{
protected:
   // the string and no are accessible by frontend(derived class) and coder class
    string name;
    int no;

public:
    coder()
    {
        // all the function of coder are also accessble to frontend class
        name = "ansh chovatiya";
        no = 5;
    }
};

class frontend : private coder
{
    public :
    frontend()
    {
        cout << "Name : " << name << endl;
        cout << "NO : " << no;
    }
};

int main(void)
{
    frontend ansh;
    // ansh.frontend();
}