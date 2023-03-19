/*
5. Define a class ReverseNumber and define an instance member function to find Reverse
of a Number using class.
*/

#include<iostream>
using namespace std;

class ReverseNumber
{
    int rev=0,rem,num;
public:
    ReverseNumber(int temp)
    {
        num=temp;
    }

    void numRev()
    {
        while(num)
        {
            rem=num%10;
            num/=10;
            rev=rev*10+rem;
        }
    }
    void display()
    {
        cout<<"Reverse:"<<rev;
    }
};

int main()
{
    ReverseNumber Rn(458796);
    Rn.numRev();
    Rn.display();

    return 0;
}
