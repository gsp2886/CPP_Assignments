//  6. Define a function to swap data of two int variables using call by reference

#include<iostream>
using namespace std;

class Swap
{
public:

    Swap(int &p,int &q)
    {
        int temp=p;
        p=q;
        q=temp;
    }
};

int main()
{
    int c,d;
    cout<<"Enter value of c and d:"<<endl;
    cin>>c>>d;

    Swap Sw(c,d);
    cout<<"After swap"<<endl;
    cout<<"c is : "<<c<<endl<<"d is : "<<d<<endl;

    return 0;
}
