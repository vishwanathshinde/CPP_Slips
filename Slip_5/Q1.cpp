#include<iostream>
#include <string.h>
using namespace std;

class Mobile
{
    int Mobile_Id, Mobile_Price;
    char Mobile_Name;

  public:
    Mobile(int Id, int Price, char Name)
    {
        Mobile_Id = Id;
        Mobile_Price = Price;
        Mobile_Name = Name;
    }

    void display()
    {
        cout << "\nMobile id: " << Mobile_Id;
        cout << "\nMobile name: " << Mobile_Name;
        cout << "\nMobile price: " << Mobile_Price;
    }
};

int main()
{
    int Id, Price;
    char Name;

    cout << "\nEnter mobile id: ";
    cin >> Id;
    cout << "\nEnter mobile name: ";
    cin >> Name;
    cout << "\nEnter mobile price: ";
    cin >> Price;

    Mobile m1(Id, Price, Name);
    m1.display();
}