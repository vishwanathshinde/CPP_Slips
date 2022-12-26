#include <iostream>
using namespace std;

inline int maximum(int a, int b)
{
    return a > b ? a : b;
}
inline int minimum(int a, int b)
{
    return a < b ? a : b;
}

int main()
{
    int a, b;
    cout << "\nEnter two number : ";
    cin >> a >> b;
    cout << "\nNumber 1st : " << a << endl;
    cout << "\nNumber 2nd : " << b << endl;
    cout << "\nMaximum number is : " << maximum(a, b) << endl;
    cout << "\nMinimum number is : " << minimum(a, b) << endl;
    return 0;
}