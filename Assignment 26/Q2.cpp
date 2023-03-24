/*
2.Define a class Time to represent a time with instance variables h,m and s to store hour,
  minute and second. Also define following member functions
    a. void setTime(int,int,int)
    b. void showTime()
    c. void normalize()
    d. Time add(Time)
*/
#include<iostream>
using namespace std;

class Time
{
    int hour,mint,sec;
public:

    Time()
    {

    }
    void setTime(int h,int m,int s)
    {
        hour = h;
        mint = m;
        sec  = s;
    }

    Time add(Time t)
    {
        Time temp;
        temp.hour = hour + t.hour;
        temp.mint = mint + t.mint;
        temp.sec  = sec  + t.sec;

        return temp;
        //normalise();
    }

    void normalize()
    {
        hour = hour + mint/60;
        mint = mint + sec/60;
        mint = mint%60;
        sec = sec%60;
    }

    void showTime()
    {
        cout<<hour<<" : "<<mint<<" : "<<sec<<endl;
    }
};


int main()
{
    Time t1,t2,t3;

    t1.setTime(3,40,45);
    t2.setTime(4,30,50);

    t3=t1.add(t2);

    t3.normalize();
    t3.showTime();


    return 0;
}
