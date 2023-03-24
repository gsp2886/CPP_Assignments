/*
7. Define a class Box and write a program to enter length, breadth and height and initialise
    objects using constructor also define member functions to calculate volume of the box.
*/
#include<iostream>
using namespace std;

class Box
{
    int length, breadth,height;
public:
    Box(int l,int b,int h)
    {
        length = l;
        breadth= b;
        height = h;
    }
    void Volume()
    {
        cout<<"Volume of box : "<<length * breadth * height<<endl;
    }
};

int main()
{
    Box v1(2,5,1),v2(5,5,5);
    v1.Volume();
    v2.Volume();


    return 0;
}
