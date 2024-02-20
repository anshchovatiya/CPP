#include<iostream>
using namespace std;

class Exa
{
    int first,second;
    public : 

    Exa(int a,int b) : first(a),second(b){};
   
    void display()
    {
        cout << "the value of first variable is " << first << endl;
        cout << "the value of second variable is " << second << endl;
    }

    Exa(){};

    Exa operator+(Exa one)
    {
        Exa ans;
        ans.first = first + one.first;
        ans.second = second + one.second;

        return ans;
    }
};


int main(void)
{
    Exa ob1,ob2,ob3;

    ob1 =Exa(34,69);
    ob2 =Exa(34,69);
    
    ob1.display();
    ob2.display();
}