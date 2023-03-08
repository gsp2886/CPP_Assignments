/*
9. Write functions using function overloading to find a maximum of two numbers and both
the numbers can be integer or real.
*/
#include<iostream>
using namespace std;

int maximum(int x,int y)
{
    if(x>y)
        return x;
    else
        return y;
}
double maximum(double x,double y)
{
    if(x>y)
        return x;
    else
        return y;
}

double maximum(int x,double y)
{
    if(x>y)
        return x;
    else
        return y;
}

double maximum(double x,int y)
{
    if(x>y)
        return x;
    else
        return y;
}

int main()
{
    cout<<"Greatest is "<< maximum(5,10) <<endl;
    cout<<"Greatest is "<< maximum(5.5,4.2) <<endl;
    cout<<"Greatest is "<< maximum(5,10.2) <<endl;
    cout<<"Greatest is "<< maximum(7.5,5) <<endl;

    return 0;
}

