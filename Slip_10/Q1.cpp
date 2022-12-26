#include <iostream>
using namespace std;

class Salary
{
private:
    int n;

public:
    // function to get number
    void getSalary(int x)
    {
        n = x;
    }
    // function to display number
    void dispSalary(void)
    {
        cout << "value of n is: " << n;
    }
    // unary ++ operator overloading
    void operator++(void)
    {
        n = ++n;
    }
    // unary -- operator overloading
    void operator--(void)
    {
        n = --n;
    }
};

int main()
{
    Salary num;
    num.getSalary(10000);

    ++num;
    cout << "After increment - ";
    num.dispSalary();
    cout << endl;

    --num;
    cout << "After decrement - ";
    num.dispSalary();
    cout << endl;

    return 0;
}