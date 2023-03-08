//  7. Write a function using the default argument that is able to add 2 or 3 numbers.

#include<iostream>
using namespace std;

int add(int x=0,int y=0,int z=0)
{
    return x+y+z;
}

int main()
{
    int x=5,y=10,z=5;

    cout<<"Addition of 2 num is :"<<add(x,y)<<endl;
    cout<<"Addition of 3 num is :"<<add(x,y,z)<<endl;

    return 0;
}

