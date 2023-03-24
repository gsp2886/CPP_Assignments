// 5. Define a class Date and write a program to Display Date and initialise date object using
//    Constructors

#include<iostream>
using namespace std;

class Date
{
    int dd,mm,yy;
public:
    Date(int d,int m,int y)
    {
        dd=d;
        mm=m;
        yy=y;
    }
    void showDate()
    {
        cout<<"Date : "<<dd<<"-"<<mm<<"-"<<yy<<endl;
    }

};

int main()
{
    Date dat(26,8,2000);
    dat.showDate();

    return 0;
}
