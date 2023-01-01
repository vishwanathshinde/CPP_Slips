#include<iostream>
using namespace std;

class printdata
{
    public:
        void print(int);
        void print(char *);
};

void printdata :: print(int a)
{
    cout << "First function(int): " << a;
}

void printdata :: print(char *str)
{
    cout << "Second function(char *): " << "\"" << str << "\"";
}

int main()
{
    printdata pd;
    pd.print(10);

    char name[20];
    cout << "\nEnter string: ";
    cin >> name;

    pd.print(name);
    return 0;
}