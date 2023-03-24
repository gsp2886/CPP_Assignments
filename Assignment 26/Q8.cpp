/*
8. Define a class Bank and define member functions to read principal , rate of interest and
year. Another member functions to calculate simple interest and display it. Initialise all details
using constructor.//
*/
#include<iostream>
using namespace std;

class Bank
{
    int prin,RoI,year;
    float SI,amt;

public:
    Bank()
    {


    }
    Bank(int p,int r,int y)
    {
        prin = p;
        RoI = r;
        year = y;
    }
    void S_Interest()
    {
        SI = (prin*RoI*year)/100.0;

    }
    void amtt()
    {
        amt = SI+prin;
    }
    void display()
    {
        cout<<"Simple Interest : "<<SI<<endl;
    }
    void Amount()
    {
        cout<<"Amount : "<<amt<<endl;
    }
};
void read(int *p,int *r,int *y)
{
    cout<<"Enter Principle : ";
    cin>>*p;
    cout<<"Enter Rate of Interest : ";
    cin>>*r;
    cout<<"Enter year : ";
    cin>>*y;
}
int main()
{
    int p,r,y;
    read(&p,&r,&y);

    Bank c1(p,r,y);
    c1.S_Interest();
    c1.display();
    c1.amtt();
    c1.Amount();
    return 0;
}
