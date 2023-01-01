#include<iostream>
using namespace std;

class Circle
{
    float radius, height, vol;

  public:

    void setradius()
    {
        cout << "Enter radius: ";
        cin >> radius;
    }

    void setheight()
    {
        cout << "Enter height: ";
        cin >> height;
    }

    void volume()
    {
        vol = 3.142 * radius * radius * height;
        cout << "Volume of circle: " << vol;
    }
};

int main()
{
    Circle cr;
    cr.setradius();
    cr.setheight();
    cr.volume();
}