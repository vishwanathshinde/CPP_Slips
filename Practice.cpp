#include<iostream>
using namespace std;

class student
{
    public:
        int maximum(int,int);
        int maximum(int*, int arraylength);
};

int student :: maximum(int a, int b)
{
    if(a>b)
        cout << a << "is maximum";
    else
        cout << b << "is maximum";
}

int student :: maximum(int arr[] , int n)
{
    int i;
    if(arr[0] < arr[i])
    {
        arr[0] = arr[i];
    }
    cout << "\nLargest element: " << arr[0];
}

int main()
{
    student s;
    s.maximum(10,20);

    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "\nLargest in given array is " << ( arr , n ) ;
    s.maximum(arr,5);
    return 0;
}