/*
1.  Define a class Complex to represent a complex number with instance variables a and b
    to store real and imaginary parts. Also define following member functions
     a. void setData(int,int)
     b. void showData()
     c. Complex add(Complex)
*/

#include<iostream>
using namespace std;

class Complex
{
    int c,d;

public:
    Complex(int x,int y)
    {
        c=x;
        d=y;
    }
    Complex()
    {

    }
    void setData(int x,int y)
    {
        c=x;
        d=y;
    }

    void showData()
    {
        cout<<endl<<"Num = "<<c<<"+"<<d<<"i"<<endl;
    }
    Complex add(Complex p)
    {
        Complex temp;

        temp.c = c + p.c;
        temp.d = d + p.d;
        return temp;
    }
};

int main()
{
    Complex c1,c2,c3;
    c1.setData(2,3);
    c2.setData(5,7);

    c3=c1.add(c2);

    c3.showData();

    return 0;
}


