#include <iostream>
using namespace std;
#include <conio.h>
class sample
{
    int n1, n2;

public:
    sample()
    {
        n1 = 10;
        n2 = 20;
    }
    sample(int a, int b)
    {
        n1 = a;
        n2 = b;
    }
    sample(int a, long int b = 50)
    {
        n1 = a;
        n2 = b;
    }
    void show()
    {
        if (n1 > n2)
            cout << "\n Maximum = " << n1; 
        else cout << "\n Maximum = " << n2;
    }
};
int main()
{
    cout << "\n for Default constructor : ";
    sample s;
    s.show();
    cout << "\n For parameterizd constructor : ";
    sample s1(40, 30);
    s1.show();
    cout << "\n For Default constructor : ";
    sample s2(60);
    s2.show();
    return 0;
}