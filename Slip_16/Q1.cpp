#include<iostream>
using namespace std;

class number
{
    int n1, n2;
  public:

    number()
    {
        n1 = 10;
        n2 = 20;
    }  

    number(int a, int b)
    {
        n1 = a;
        n2 = b;
    }

    void display()
    {
        if(n1>n2)
            cout << n1 << " is grater.";
        else
            cout << n2 << " is grater.";
    }
};

int main()
{
    cout << "\n for Default constructor : ";
    number n;
    n.display();

    cout << "\n For parameterizd constructor : ";
    number n1(10,20);
    n.display();
}