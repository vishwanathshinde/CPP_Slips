#include<iostream>
using namespace std;

class array
{
    public:
        int n, i, j;
        float a[10], temp;

        void accept()
        {
            cout << "Enter how many elements: ";
            cin >> n;
            for(i = 0; i<n; i++)
            {
                cout << "Enter elements: ";
                cin >> a[i];
            }
            cout << "Array is: ";

            for(i=0; i<n; i++)
            {
                cout << a[i] << "\t"; 
            }

            //sorting
            for(i=0; i<n; i++)
            {
                for(j=0; j<n-i-1; j++)
                {
                    if(a[j] > a[j+1])
                    {
                        temp = a[j];
                        a[j] = a[j + 1];
                        a[j + 1] = temp;
                    }
                }
            }
            //sorted
            cout << "Sorted array is: ";
            for(i=0; i<n; i++)
            {
                cout << a[i] << "\t";
            }
        }
};
int main()
{
    array ar;
    ar.accept();
}