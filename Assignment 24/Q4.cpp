//  4. Define a function to print Pascal Triangle up to N lines

#include<iostream>
using namespace std;

int fact(int a)
{
    int facto=1;

    for(int i=1;i<=a;i++)
    {
        facto*=i;
    }
    return facto;
}

void pascal(int num)
{
    int n,r;
    for(n=0;n<num;n++)
    {
        for(r=0;r<=n;r++)
        {
            cout<<" "<<fact(n) / ( fact(r) * fact(n-r) );
        }
        cout<<endl;
    }
}
int main()
{
    int num;
    cout<<"Enter a num:";
    cin>>num;

    cout<<"---Pascal Triangle---\n";
    pascal(num);

    return 0;
}

