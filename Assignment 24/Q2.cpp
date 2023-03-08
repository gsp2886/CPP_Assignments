//  2. Define a function to find the highest value digit in a given number.

#include<iostream>
using namespace std;

class digit
{
public:
    int x;

    digit(int a)
    {
        x=a;
    }

    void highest();
/*
    void findmax()
    {
        int maxx=-1;
        while(x)
        {
            int rem=x%10;
            x=x/10;
            if(maxx < rem)
                maxx=rem;
        }
        cout<<"Highest digit is "<<maxx;
    }
*/
};
void digit::highest()
{
    int i,cnt=0;
    int temp=x;
    while(temp)
    {
        temp=temp/10;
        cnt++;
    }

    int a[cnt];
    for(i=0;i<cnt;i++)
    {
        a[i]=x%10;
        x=x/10;
    }
    int maxi=a[0];
    for(i=1;i<cnt;i++)
    {
        if(maxi<a[i])
        {
            maxi=a[i];
        }
    }
    cout<<"Highest digit is "<<maxi;
}

int main()
{
    int n;
    cout<<"Enter a num:"<<endl;
    cin>>n;
    digit p(n);
    p.highest();
    //p.findmax();

    return 0;
}

