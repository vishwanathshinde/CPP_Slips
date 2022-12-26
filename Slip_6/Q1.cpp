#include<iostream>
using namespace std;
class printdata
{
    public:
        void print(int);
        void print(int,int);
        void print(char *);
};
 
void printdata::print(int a)
{
    cout<<endl<<"First Function (int): "<<a;
}
 
void printdata::print(int a,int b)
{
    cout<<endl<<"Second Function (int,int): "<<"[<"<<a<<">,<"<<b<<">]"<<endl;
}
 
void printdata::print(char *str)
{
    cout<<"Third Function (char *): ";
    cout<<"\""<<str<<"\""<<endl;
}
 
int main()
{
    printdata p;
    p.print(25);
    //p.print(200,18);
    char name[20];
    cout<<endl<<"Enter the string: ";
    cin>>name;
    p.print(name);
    return 0;
}