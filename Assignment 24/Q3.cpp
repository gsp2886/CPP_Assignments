//  3. Define a function to calculate x raised to the power y.

#include<iostream>
using namespace std;

class power
{
public:
    int x,y;

    void power_raised()
    {
        int result=1;
        int yy=y;
        while(y)
        {
            result=result*x;
            y--;
        }
        cout<<x<<" ^ "<<yy<<" : "<<result;
    }
};

int main()
{
    power a;
    cout<<"Enter a num : ";
    cin>>a.x;
    cout<<"Enter its power : ";
    cin>>a.y;


    a.power_raised();

    return 0;
}

