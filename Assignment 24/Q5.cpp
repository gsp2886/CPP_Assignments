//  5. Define a function to check whether a given number is a term in a Fibonacci series or not.

#include<iostream>
using namespace std;

class fibo
{
public:
    int n,c,d,temp=1;
    void fib()
    {
        c=0;
        d=1;

        for(int i=1;c<=n;i++)
        {
            if(c==n)
            {
                cout<<n<<" is in fibonacci series"<<endl;
                break;
            }

            temp=c+d;
            c=d;
            d=temp;
        }
        if(c>n)
            cout<<n<<" is not in fibonacci series"<<endl;
    }
};

int main()
{
    fibo fi;
    cout<<"Enter a num:";
    cin>>fi.n;
    fi.fib();

    return 0;
}

