#include <iostream>

#include <cmath>

using namespace std;


// +3 --> unary '+' operator
// 3+5 --> binary '+' operator

// --> if operator has one operand it is called unary operator
// --> if operator had more than one operand it is called binary operator 


// an+rom --> 'an' and 'rom' both are user defined datatype so binary operator will not work on them because binary operator only woks on pre-defined datatype
// --> that why there is concepts of operator overloading 

// --> In operation overloading you have to at least provide one pre-defined data-type

// (::) , (.) , (.*) , (sizeof) --> these operator can not be used in operator overloading

class Check
{
    int x, y;

public:
    Check(){};

    Check(int a, int b) : x(a), y(b) {}

    void print()
    {
        cout << "The value of x is " << x << endl;
        cout << "The value of y is " << y << endl;
    }




    // --> this is normally used method

    // void plus(Check an, Check rom)
    // {
    //     Check answer;

    //     answer.x = an.x + rom.x;
    //     answer.y = an.y + rom.y;

    //     cout << "the value of sum is " << answer.x << " + " << answer.y << " i " << endl;
    // }



    // Check --> return type
    // operator --> keyword
    //  " + " --> operator
    // Check a --> argument
    Check operator + (Check a)
    {
        Check ans;

        ans.x = x + a.x;
        ans.y = y + a.y;

        return ans;
        
    }

    void display()
    {
        cout << "the value of x is " << x << endl;
        cout << "the value of y is " << y << endl;
    }


    void operator++()
    {
        // this is function for unary operator overloading it will only have one object which is incrementing it's elemets
        x++;
        y++;
    }
};

int main(void)
{
    Check an(38, 69), rom(84, 69);

    an.display();
    rom.display();

    Check ans;
    ans = an + rom;

    ans.display();
    
    // this operator overloading function will increment both x and y 
    ++ans;

    ans.display();
    // ans.plus(an, rom); --> this is for first method
}