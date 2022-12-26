#include <iostream>
using namespace std;
#include <conio.h>
#include <string.h>
class part
{
    int pid;
    char pnm[20];
    float price;

public:
    part(int, char *, float);
    part(){};
    void putpart();
};
part::part(int id, char *nm, float prc)
{
    pid = id;
    strcpy(pnm, nm);
    price = prc;
}
void part::putpart()
{
    cout << "\n Part id : " << pid;
    cout << "\n Part name : "<< pnm;
    cout << "\n Part price : "<<price;
}
int main()
{
    int id;
    char nm[20];
    float prc;
    cout << "\n Enter part id : ";
    cin >> id;
    cout << "\n Enter Part name : ";
    cin >> nm;
    cout << "\n Enter Part price : ";
    cin >> prc;
    
    part p1(id, nm, prc);
    part p2;
    p2 = p1;
    cout << "\n-----------------------------";
    cout << "\n Parameterized constructor ";
    cout << "\n-----------------------------";
    p1.putpart();
    cout << "\n-----------------------------";
    cout << "\n copy constructur ";
    cout << "\n-----------------------------";
    p2.putpart();
    return 0;
}