#include<iostream>
#include<fstream>

using namespace std;

int main()
{
    // string s = "I will send this text to new file " ;
     
    // ofstream an("57_exa.txt");

    //  an << s;

    // an.close();

    ifstream rv("exa.txt");
    ofstream out("exa1.txt");

    string receive;

    while(rv.eof()==0)
    {
   getline(rv,receive);
    
    out << receive << "\n";


    }


    rv.close();
    out.close();

    return 0;
}