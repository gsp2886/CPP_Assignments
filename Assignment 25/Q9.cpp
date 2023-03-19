/*
9. Define a class Circle and define an instance member function to find the area of the
circle.
*/
#include<iostream>
using namespace std;

class Circle
{
    int rad;
    float Area;
public:
    Circle(int r)
    {
        rad=r;
    }
    void AreaCircle()
    {
        Area=3.14*rad*rad;
    }
    void display()
    {
        cout<<"Area of Circle = "<<Area;
    }
};

int main()
{
    Circle c(1);
    c.AreaCircle();
    c.display();

    return 0;
}
