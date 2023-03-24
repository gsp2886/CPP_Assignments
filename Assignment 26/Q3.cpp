/*
3. Define a class Cube and calculate Volume of Cube and initialise it using constructor.
*/
#include<iostream>
using namespace std;

class Cube
{
    float Vol;
    float cube;
public:
    Cube(float a)
    {
        Vol = a;
    }
    void VolCube()
    {

        cube = Vol* Vol * Vol;
    }
    void show()
    {
        cout<<"Volume of cube : "<<cube;
    }
};

int main()
{
    Cube vol(2.24);
    vol.VolCube();
    vol.show();

    return 0;
}
