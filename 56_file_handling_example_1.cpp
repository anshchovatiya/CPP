#include<iostream>
#include<fstream>

using namespace std;


int main()
{
    string read;
    ifstream input("D:\\CODES\\CPP\\temp.txt");  // It will open file and read the data from it 
    ofstream output("D:\\CODES\\CPP\\temp2.txt");   // It will creat file and write data on it


    while(getline(input,read))
    {
      
        output << read;
        read = '\n';  // this will get to 
        output <<read;
    }

 
    input.close();
    output.close();


}
