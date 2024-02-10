#include <iostream>

using namespace std;

class NUM; //  --> declaration of class

// this class will calculate the result
class calculator
{
public:
    // thsee are decalration of all member function
    // If we try to define them here , It will not work becuase this function do not know elements of other class
    int sumofnum1(NUM, NUM);

    int sumofnum2(NUM, NUM);

    int minus1(NUM, NUM);

    int minus2(NUM, NUM);
};

// this class will allocate numbers
class NUM
{
    int a;
    int b;
    friend class calculator;

public:
    // constuctor function
    NUM(int a1, int b1)
    {
        a = a1;
        b = b1;
    }
};

// defination of all member function of calculator ,now It know's what are the elements of the other functions
int calculator::sumofnum1(NUM q, NUM w)
{
    return q.a + w.a;
}
int calculator::sumofnum2(NUM q, NUM w)
{
    return q.b + w.b;
}
int calculator::minus1(NUM q, NUM w)
{
    return q.a - w.a;
}
int calculator::minus2(NUM q, NUM w)
{
    return q.b - w.b;
}

int main(void)
{

    NUM first(30, 6), second(3, 9);
    // decalring new objcet of class calculator
    calculator calculate;
    // It will calculate the equation and return answer to total
    int total = calculate.minus1(first, second);
    cout << total << endl;
}






class Solution {
public:
    
    int lengthOfLastWord(string s) {
        
        int len=s.length()-1;
    
        ac:
        int count=0;
        for(int i=len;s[i]!=' ';i--)
        {
            count++;
            if(i<0) break;
        }


        if(s[len]==' '&&len>=0)
        {

            len-=1;
            goto ac;
        }
        return count;
    }
};