/*
6. Define a class Square to find the square of a number and write a C++ program to Count
number of times a function is called.
*/
#include<iostream>
using namespace std;

class Square
{
    static int cnt;
    int x;
    int sq;
public:
    Square(int i)
    {
        x=i;
    }
    void findSqr()
    {
        sq=x*x;
        cnt++;
    }

    void printCount()
    {
        cout<<endl<<"Count = "<<cnt<<endl;
    }
    void SqrNum()
    {
        cout<<"Square of "<<x<<" is "<<sq<<endl;
    }

};

int Square:: cnt=0;

int main()
{
    Square c(12);
    Square d(5);

    c.findSqr();
    d.findSqr();

    c.SqrNum();
    d.SqrNum();

    c.printCount();

    return 0;
}
