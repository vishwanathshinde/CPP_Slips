#include<iostream>
using namespace std;

class Item
{
    int Item_code, Item_price;
    char Item_name[20];
    static int count;

  public:
    void getdata()
    {
        cout << "Enter the item code: ";
        cin >> Item_code;
        cout << "Enter the item name: ";
        cin >> Item_name;
        cout << "Enter the item price: ";
        cin >> Item_price;
        count++;
    }

    void display()
    {
        cout << "Item code: " << Item_code;
        cout << "Item name: " << Item_price;
        cout << "Item price: " << Item_price;
    }

    static void nob()
    {
        cout << "Total number of objects are: " << count;
    }
};
int Item::count;
int main()
{
    Item ob;
    int n;
    cout << "Enter how many items: ";
    cin >> n;

    for(int i=0; i<n; i++)
        ob.getdata();
    for(int i=0; i<n; i++)
        ob.display();
    ob.nob();
    return 0;
}