#include <iostream>
using namespace std;
#include <conio.h>
class arr
{
public:
    int n, i, j;       // n=no of elements
    float a[10], temp; // a=array for no of elements
    void accept()
    {
        cout << "\nEnter how many elements: ";
        cin >> n;
        for (i = 0; i < n; i++)
        {
            cout << "\nEnter elements: ";
            cin >> a[i];
        }
        cout << "\n============Array is==============\n\n";
        for (i = 0; i < n; i++)
        {
            cout << a[i] << "\t";
        }
        for (i = 0; i < n; i++)
        {
            for (j = 0; j < n - i - 1; j++)
            {
                if (a[j] > a[j + 1])
                {
                    temp = a[j];
                    a[j] = a[j + 1];
                    a[j + 1] = temp;
                }
            }
        }
        cout << "\n===========Sorting Array is===========\n\n";
        for (i = 0; i < n; i++)
        {
            cout << a[i] << "\t";
        }
    }
};
int main()
{
    arr r; // object created
    r.accept();
    getch();
    return (0);
}