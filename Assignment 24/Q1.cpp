//  1. Define a function to check whether a given number is a Prime number or not

#include<iostream>
using namespace std;

class prime
{
public:
    int x;
    int prime_check();

    prime(int a)
    {
        x=a;
    }

};
int prime::prime_check()
{
    int i,flag=0;
    for(i=2;i<=x/2;i++)
    {
        if(x%i==0)
        {
            return 0;
        }
    }
    if(i== (x/2)+1 )
        return 1;
}

int main()
{
    int n;
    cout<<"Enter a num:"<<endl;
    cin>>n;
    prime p(n);

    int prm = p.prime_check();

    if(prm==1)
        cout<<"Prime";
    else
        cout<<"Not Prime";

    return 0;
}

