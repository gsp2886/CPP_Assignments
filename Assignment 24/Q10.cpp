/*
10. Write functions using function overloading to add two numbers having different data
types.
*/
#include<iostream>
using namespace std;

int sum(int x,int y)
{
    return x+y;
}
double sum(double x,double y)
{
    return x+y;
}

double sum(int x,double y)
{
    return x+y;
}

double sum(double x,int y)
{
    return x+y;
}

int main()
{
    cout<<"Sum of int is "<< sum(5,10) <<endl;
    cout<<"Sum of float is "<< sum(5.5,9.2) <<endl;
    cout<<"Sum of a int and a float is "<< sum(5,5.5) <<endl;
    cout<<"Sum of a float and a int is "<< sum(5.2,10) <<endl;


    return 0;
}


