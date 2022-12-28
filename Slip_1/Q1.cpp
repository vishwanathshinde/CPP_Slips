#include<iostream>
using namespace std;

class Cylinder
{
        float radius, height, vol;
    public:
        void setradius();
        void setheight();
        void volume();
};

void Cylinder :: setradius()
{
    cout << "Enter radius: ";
    cin >> radius;
} 

void Cylinder :: setheight()
{
    cout << "Enter height: ";
    cin >> height;
}

void Cylinder :: volume()
{
    vol = 3.14*radius*radius*height;
    cout << vol;
}

int main()
{
    Cylinder cy;
    cy.setradius();
    cy.setheight();
    cy.volume();
}