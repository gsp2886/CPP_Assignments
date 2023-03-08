#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter n:";
    cin>>n;
    int sum=0,i;
    int arr[n];

    cout<<"Enter values"<<endl;
    for(i=0;i<n;i++)
        cin>>arr[i];

    for(i=0;i<n;i++)
        sum+=arr[i];
    cout<<"Sum is "<<sum;

    return 0;
}

