#include <iostream>
using namespace std;
#include <conio.h>
#include <fstream>
class dept
{
    int did;
    char dname[20];
    char hod[15];
    int nos;

public:
    void accept()
    {
        cout << "enter the dept id";
        cin >> did;
        cout << "enter the dept name";
        cin >> dname;
        cout << "enter the hod";
        cin >> hod;
        cout << "enter the no of staff";
        cin >> nos;
    }
    void display()
    {
        cout << "the dept id is-" << did; 
        cout << "the dept name is-" << dname; 
        cout << "the hod is-" << hod; 
        cout << " the no of staff is-" <<nos;
    }
};
 
int main()
{
    dept d[5];
    int n, i;
    fstream file;
    file.open("dept.txt", ios::in | ios::out);
    cout << "enter the no of record you want -";
    cin >> n;
    for(i=0;i<n; i++)
    {
        d[i].accept();
        file.write((char *)&d[i], sizeof(d[i]));
    }
    cout<<"\ndetails od department from the file-";
    for(i=0;i<n;i++) 
    {
        file.read((char *)&d[i], sizeof(d[i]));
        d[i].display();
    }
    file.close();
    return 0;
    }