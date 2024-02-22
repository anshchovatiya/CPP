#include<iostream>

using namespace std;

class Student
{
    string name;
    int roll_num;

    public :

    void get_data()
    {
        cout << endl << "enter name of student : " ;
        getline(cin,name);

        cout << "enter roll number of student : " ;
        cin >> roll_num;
        getchar();
    }

    void print_data()
    {
        cout << endl << "Name     : "  << name << endl;
        cout << "Roll_Num : " << roll_num << endl << " ";
    }
};


int main(void)
{
  Student *ptr = new Student [5];  // ptr is first objects address and it has capacity to store 5 variables
  Student *copy = ptr;  // this is copy of ptr because we are incrementing ptr in first loop so we need stor the home address to another pointer

  for (int i=0;i<5;i++)
  {
    ptr->get_data();
    ptr++;
  }
  for (int i=0;i<5;i++)
  {
    copy->print_data();
    copy++;
  }
}