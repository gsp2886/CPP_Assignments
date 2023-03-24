/*
10. Define a class StaticCount and create a static variable. Increment this variable in a
    function and call this 3 times and display the result.
*/

#include<iostream>
using namespace std;

class StaticCount
{
    static int cnt;
public:
    StaticCount()
    {

    }
    void stat()
    {
        cnt++;
    }
    void show()
    {
        cout<<cnt;
    }
};
int StaticCount :: cnt;

int main()
{
    StaticCount c1,c2,c3;
    c1.stat();
    c2.stat();

    c1.show();

    return 0;
}
