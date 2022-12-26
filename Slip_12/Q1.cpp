#include <iostream>
using namespace std;
#include <conio.h>
class rectangle
{
    float l, w;

public:
    void getdata()
    {
        cout << "\nEnter length of rectangle : ";
        cin >> l;
        cout << "\nEnter width of rectangle : ";
        cin >> w;
    }
    inline void Peri()
    {
        cout << "\nPerimeter of rectangle = " << 2 * (l + w);
    }
    inline void Area()
    {
        cout << "\nArea of rectangle = " << l * w;
    }
};
int main()
{
    rectangle obj;
    obj.getdata();
    obj.Peri();
    obj.Area();
    return 0;
}