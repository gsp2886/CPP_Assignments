/*
4. Define a class Counter and Write a program to Show Counter using Constructor
*/
#include<iostream>
using namespace std;

class Counter
{
    static int cnt;
public:
    Counter()
    {
        cnt++;
    }
    void show()
    {
        cout<<cnt;
    }
};
int Counter :: cnt;

int main()
{
    Counter c1,c2,c3;
    c1.show();

    return 0;
}
