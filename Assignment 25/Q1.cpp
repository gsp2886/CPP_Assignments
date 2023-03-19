/*
1. Define a class Complex to represent a complex number. Declare instance member
variables to store real and imaginary part of a complex number, also define instance
member functions to set values of complex number and print values of complex number
*/

#include<iostream>
using namespace std;

class Complex
{
    int c,d;

public:
    void Setx(int x)
    {
        c=x;
    }
    void Sety(int y)
    {
        d=y;
    }

    void print()
    {
        cout<<endl<<"Num = "<<c<<"+"<<d<<"i"<<endl;
    }
};

int main()
{
    int p,q;
    cout<<"Enter real num:";
    cin>>p;
    cout<<"Enter imaginary num:";
    cin>>q;

    Complex c;
    c.Setx(p);
    c.Sety(q);

    c.print();

    return 0;
}

