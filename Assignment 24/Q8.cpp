//  8. Define overloaded functions to calculate area of circle, area of rectangle and area of
//  triangle

#include<iostream>
using namespace std;

float area(int r)
{
    return 3.14*r*r;
}
float area(int l,int b)
{
    return l*b;
}
float area(int b,float h)
{
    return 0.5*b*h;
}

int main()
{
    int r=2,l=2,b=5;
    float h=4.2;
    cout<<area(r)<<endl;
    cout<<area(l,b)<<endl;
    cout<<area(b,h)<<endl;

    return 0;
}
