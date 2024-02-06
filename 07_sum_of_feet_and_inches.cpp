// write a program to add feets and inches

#include<iostream>

 using namespace std;


 typedef struct params 
 {
    int feet;
    float inches;
 } par;

 par sum(par ,par );

 int main(void){

    par p1,p2;

    cout << "Enter feet first feet - inches :  ";
    cin >> p1.feet >> p1.inches;
    cout << "Enter feet second feet - inches :  ";
    cin >> p2.feet >> p2.inches;

    par v=sum(p1,p2);

    cout << "the sum is "<< v.feet << " feets and " << v.inches << " inches"<< endl;

    
    

}

par sum(par a,par b)
{
    par c;

    c.feet=a.feet+b.feet;
    c.inches=a.inches+b.inches;

    while(c.inches>=12)
    {
        c.inches-=12.0;
        c.feet++;
    }

    return c;
}