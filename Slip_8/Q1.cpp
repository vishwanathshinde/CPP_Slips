#include<iostream>
using namespace std;

class second;
class first
{
    int a;
  public:
    void read_a()
    {
        a=20;
    }
    friend int sum(first f, second s);
};

class second
{
    int b;
  public:
    void read_b()
    {
        b=10;
    }
    friend int sum(first f, second s);
};

int sum(first f, second s)
{
    return f.a - s.b;
}

int main()
{
    first ob1;
    second ob2;
    ob1.read_a();
    ob2.read_b();
    cout << "Substraction is: " << sum(ob1,ob2);
    return 0;
}