#include<iostream>
using namespace std;

int main()
{
    int x,y;
    cout<<"Enter 2 num:"<<endl;
    cin>>x>>y;

    x=x*y;
    y=x/y;
    x=x/y;
    cout<<"After swap"<<endl;
    cout<<"x is "<<x<<endl;
    cout<<"y is "<<y<<endl;


    return 0;
}

