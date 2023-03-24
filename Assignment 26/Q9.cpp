/*
9.  Define a class Bill and define its member function get() to take detail of customer ,
    calculateBill() function to calculate electricity bill using below tariff :
        Upto 100 unit RS. 1.20 per unit
        From 100 to 200 unit RS. 2 per unit
        Above 200 units RS. 3 per unit.
*/
#include<iostream>
using namespace std;

class e_Bill
{
    int c_no;
    char c_name[20];
    int units;
    double bill;
public:
    void get()
    {
        cout<<"Enter Details of Customer below ::\n"<<endl;
        cout<<"Enter Customer no. ::";
        cin>>c_no;
        cout<<"Enter Customer Name. ::";
        cin>>c_name;
        cout<<"Enter no. of units used::";
        cin>>units;
    }
    void put()
    {
        cout<<"\nEntered Details of Customer are ::"<<endl;
        cout<<"\nCustomer No. is :"<<c_no<<endl;
        cout<<"\nCustomer Name is :"<<c_name<<endl;
        cout<<"\nNumber of units consumed : "<<units<<endl;
        cout<<"\nBill of customer : "<<bill<<endl;
    }

    void calq_bill()
    {
        if(units<=100)
            bill = units*1.20;
        else if(units<=200)
            bill = 100*1.20+(units-100)*2;
        else
            bill = 100*1.20 + 100*2 + (units-200)*3;
    }
};

int main()
{
    e_Bill c1;
    c1.get();
    c1.calq_bill();
    c1.put();

    cout<<endl;

    return 0;
}
