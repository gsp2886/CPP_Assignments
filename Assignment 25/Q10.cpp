/*
10. Define a class Area and define instance member functions to find the area of the
different shapes like square, rectangle , circle etc.
*/

#include<iostream>
using namespace std;

class Area
{
    int length,breadth;
    float Ar;
public:
    Area(int l=0,int b=0)
    {
        length=l;
        breadth=b;
    }
    void AreaRect()
    {
        Ar=length*breadth;
        cout<<"Area of Rectangle : ";
    }
    void AreaSquare()
    {
        Ar=length*length;
        cout<<"Area of Square : ";
    }
    void AreaCircle()
    {
        Ar = 3.14*length*length;
        cout<<"Area of Circle : ";
    }
    void display()
    {
        cout<<Ar<<endl<<endl;
    }
};

int main()
{
    Area Rc(5,10);
    Area sq(5);
    Area c(2);

    Rc.AreaRect();
    Rc.display();

    sq.AreaSquare();
    sq.display();

    c.AreaCircle();
    c.display();

    return 0;
}
