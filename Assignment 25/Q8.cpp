/*
8. Define a class Rectangle and define an instance member function to find the area of the
rectangle
*/

#include<iostream>
using namespace std;

class Rectangle
{
    int length,breadth,Area;
public:
    Rectangle(int l,int b)
    {
        length=l;
        breadth=b;
    }
    void AreaRect()
    {
        Area=length*breadth;
    }
    void display()
    {
        cout<<"Area of Rect = "<<Area;
    }
};

int main()
{
    Rectangle Rc(5,4);
    Rc.AreaRect();
    Rc.display();

    return 0;
}
