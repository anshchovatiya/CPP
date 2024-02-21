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
  Student *ptr = new Student [5];
  Student *copy = ptr;

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