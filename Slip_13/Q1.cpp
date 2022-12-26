#include<iostream>
using namespace std;

class student
{
   public:
    int maximum(int, int);
    int maximum(int*, int arraylength);
};

int student::maximum(int a, int b)
{
    if(a>b)
        cout << a << " is maximum";
    else
        cout<< b << " is maximum";
}

int student :: maximum(int arr [ ] , int n)
{
    int i;
    if(arr[0] < arr[i])
      arr[0] = arr[i];
    cout << endl << "Largest element = " << arr[0];
}

int main()
{
    student s;
    s.maximum(10,15);
    int arr [ ] = { 10 , 324 , 100005 , 90 , 9808 } ;
    int n = sizeof ( arr ) / sizeof (arr [ 0 ] ) ;
    cout << " Largest in given array is " << ( arr , n ) ;
    s.maximum(arr,5);
    return 0;
}