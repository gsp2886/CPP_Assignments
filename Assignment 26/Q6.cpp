/*
6. Define a class student and write a program to enter student details using constructor and
define member function to display all the details.
*/
#include<iostream>
#include<cstring>

using namespace std;

class student
{
    char name[20];
    int roll_no;
    char batch[5];
public:
    student()
    {

    }
    student(char na[20],int roll,char bat[5] )
    {
        strcpy(name,na);
        strcpy(batch,bat);
        roll_no = roll;
    }
    void show_Info()
    {
        cout<<name<<"\t\t"<<roll_no<<"\t\t"<<batch<<endl;
    }
};

int main()
{
    student st1("Ganesh Pujari",43,"B2"),st2("Saiban Pagarkar",34,"B2"),st3("Atharva ",11,"B1");

    cout<<"Name"<<"\t\t\t"<<"Roll No"<<"\t\t"<<"Batch"<<endl;

    st1.show_Info();
    st2.show_Info();
    st3.show_Info();


    return 0;
}
