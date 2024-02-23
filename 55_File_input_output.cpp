#include<iostream>
#include<fstream>

using namespace std;

/*
ofstream -> output files stream

-> This class is derived from the class ‘fstream’.
-> This class handle output stream. 
-> The insertion operator (<<) is overloaded in this class to handle output streams to files from the program execution. 
-> This class declares output functions such as open (), put (), write(), seekp() ,tellp() and write ().


ifstream -> input files stream

-> This class is derived from the class ‘fstream’.
-> This class handle intput stream. 
-> The extraction operator (<<) is overloaded in this class to handle input streams to files from the program execution. 
-> This class declares output functions such as open (), get (), read (), seekg(), tellg() and getline ().

*/

int main()
{

string v = "I am sending this text to file temp.txt1";
ofstream output_in_file("temp.txt");

output_in_file<< v;
// now the text in string v has been sent to the file temp.txt

string p;
ifstream input_in_file("temp2.txt");

getline(input_in_file,p);
cout << p << endl;  // this will call for the first line 
getline(input_in_file,p);
cout << p << endl;   // this will get second line



}