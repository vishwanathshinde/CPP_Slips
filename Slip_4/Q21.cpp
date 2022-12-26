#include <conio.h>
#include <iostream>
using namespace std;
class arr
{
public:
    int r, c, i, j;
    int **a; // double pointer a
    arr()
    {
        cout << "Enter how many rows: ";
        cin >> r;
        cout << "Enter how many columns: ";
        cin >> c;
        a = new int *[r]; // allocate memory dynamically for row
        for (i = 0; i < r; i++)
        {
            a[i] = new int[c]; ////allocate memory dynamically for column
        }
        for (i = 0; i < r; i++)
        {
            for (j = 0; j < c; j++)
            {
                cout << "Enter an element: ";
                cin >> a[i][j];
            }
        }
    }
    void dis() // display 2d array
    {
        for (i = 0; i < r; i++)
        {
            for (j = 0; j < c; j++)
            {
                cout << a[i][j] << " ";
            }
            cout << endl;
        }
    }
    ~arr()
    {
        delete a; // destriction of 2d array dynamically
        cout << "matrix destroyed succesfully.";
        getch();
    }
};
int main()
{
    arr o;
    o.dis();
    getch();
    return (0);
}