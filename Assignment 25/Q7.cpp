/*
7. Define a class Greatest and define instance member function to find Largest among 3
numbers using classes.
*/

#include<iostream>
using namespace std;
class LargestNumber
{

    int x,y,z,Max;
public:

    LargestNumber(int c,int d,int e)
    {
        x=c;
        y=d;
        z=e;
    }
    void larg()
    {
        Max=(x>y)?(x>z?x:z):(y>z?y:z);
    }
    void display()
    {
        cout<<"Largest is "<<Max;
    }
};

int main()
{
    LargestNumber lr(3,7,1);

    lr.larg();
    lr.display();

    return 0;
}
