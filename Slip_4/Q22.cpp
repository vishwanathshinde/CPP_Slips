#include <iostream>
using namespace std;
#include <conio.h>

class train
{
protected:
    int tno;
    char tnm[20];

public:
    void gettrain()
    {
        cout << "\n Enter Train Info : ";
        cout << "\n Train No : ";
        cin >> tno;
        cout << "\n Train Name : ";
        cin >> tnm;
    }
    void puttrain()
    {
        cout << "\n Train Info ......... \n";
        cout << "\n Train No : " << tno;
        cout << "\n Train Name : " << tnm;
    }
};
class route : public train
{
protected:
    int rid;
    char source[20], dest[20];

public:
    void getroute()
    {
        gettrain();
        cout << "\n route id : ";
        cin >> rid;
        cout << "\n Source : ";
        cin >> source;
        cout << "\n destination : ";
        cin >> dest;
    }
    void putroute()
    {
        puttrain();
        cout << "\n Route Id : " << rid;
        cout << "\n Source : " << source;
        cout << "\n Destination : " << dest;
    }
};
class reservation : public route
{
    int seat, cls;
    float fare;
    char tdt[20];

public:
    void getres()
    {

        getroute();
        cout << "\n Total_seats : ";
        cin >> seat;
        cout << "\n Train_class : ";
        cin >> cls;
        cout << "\n Train_fare : ";
        cin >> fare;
        cout << "\n Trav_date : ";
        cin >> tdt;
    }
    void putres()
    {
        putroute();
        cout << "\n Total_seats : " << seat;
        cout << "\n Train_class : " << cls;
        cout << "\n Total_Fare : " << fare;
        cout << "\n Trav_date : " << tdt;
    }
    void search(int s)
    {
        if (s == cls)
        {
            putres();
        }
    }
};
int main()
{
    int n, ch, i, cls;
    route r[20];
    reservation s[20];
    while (1)
    {
        cout << "\n************** Menu *******************";
        cout << "\n 1: Accept details ";
        cout << "\n 2: Display All n details ";
        cout << "\n 3: Search train ";
        cout << "\n 4: Exit";
        cout << "\n Enter Choice : ";
        cin >> ch;
        switch (ch)
        {
        case 1:
            cout << "\n Enter How many records : ";
            cin >> n;
            cout<<"\n Enter how many reservations: "; 
            for(i=0; i<n; i++) 
            {
                s[i].getres();
            }
            break;
        case 2 : 
            for(i=0;i <n; i++)
            {
                s[i].putres();
            }
            break;
        case 3 : 
            cout<<"\n Enter Train_class : ";
            cin>>cls;
            for(i=0;i<cls; i++)
            {
                s[i].search(cls);
            }
            break;
        case 4 : 
            exit(0);
        default : 
            cout<<"\n Invalid choice .........";
        }
    }
    return 0;
}