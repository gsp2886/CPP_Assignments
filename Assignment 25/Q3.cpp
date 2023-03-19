/*
3. Define a class Factorial and define an instance member function to find the Factorial of a
number using class.
*/
#include<iostream>
using namespace std;

class Factorial
{
public:
    int fact=1;
    int num;

    void factt()
    {
        int i;
        for(i=1;i<=num;i++)
        {
            fact=fact*i;
        }
    }

    void display()
    {

        cout<<"Fact of "<<num<<" is "<<fact;
    }


};

int main()
{
    Factorial f;
    f.num=6;
    f.factt();
    f.display();

    return 0;
}
