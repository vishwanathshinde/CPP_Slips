#include<iostream>
using namespace std;

class Rectangle2;
class Rectangle1
{
  public:
    float length, width, area1;
    void getdata()
    {
        cout << "Enter length: ";
        cin >> length;
        cout << "Enter width";
        cin >> width;
    }
    void display()
    {
        area1 = length * width;
        cout << "Area is: " << area1;
    }

    friend void compare(Rectangle1 r1, Rectangle2 r2);
};

class Rectangle2
{
  public:
    float length, width, area2;
    void getdata()
    {
        cout << "Enter length 2: ";
        cin >> length;
        cout << "Enter width 2: ";
        cin >> width;
    }
    void display()
    {
        area2 = length*width;
        cout << area2;
    }
    friend void compare(Rectangle1 r1, Rectangle2 r2);
};

void compare(Rectangle1 r1, Rectangle2 r2)
{
    if(r1.area1 == r2.area2)
        cout << "Both are same!";
    else
        cout << "Both are not same!";
}

int main()
{
    Rectangle1 R1;
    R1.getdata();
    R1.display();
    Rectangle2 R2;
    R2.getdata();
    R2.display();
    compare(R1,R2);
    return 0;
}