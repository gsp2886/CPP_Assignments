/*
2. Define a class Time to represent Time (like 3 hr 45 min 20 sec). Declare appropriate
number of instance member variables and also define instance member functions to set
values for time and display values of time.
*/

#include<iostream>
using namespace std;

class Time
{
    int hour,mint,sec;
    public:
        void set_hour(int h)
        {
            hour=h;
        }
        void set_mint(int m)
        {
            mint=m;
        }
        void set_sec(int s)
        {
            sec=s;
        }

        void display()
        {
            cout<<hour<<" hr "<<mint<<" min "<<sec<<" sec"<<endl;
        }
};

int main()
{
    Time t1;

    t1.set_hour(3);
    t1.set_mint(45);
    t1.set_sec(20);

    t1.display();

    return 0;
}

