#include <iostream>

// exit(0) -> It terminate entire program

using namespace std;

class name
{
private:
    string name;
    int roll_num;

    // getstring private function
    void getstring(string a)
    {
        name = a;
    }

public:
    // If you want to call use privately defined function you need to call that function in public function
    // so that you can access the private function and variables
    void get(string a)
    {
        getstring(a);
    }

    void print()
    {
        cout << name << endl;
    }
};

int main(void)
{
    name ansh;
    ansh.get("anshchovatiya");
    ansh.print();
}
