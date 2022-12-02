#include<iostream>
using namespace std;
class guest
{
   
    public:
    int people;
    string name;
    double server;
    
    void Server(double sr)
    {
        sr=server;
        sr=people*20.7;
    }
};

void wedding()
{
	guest m;
	int mn;
	cout<<"enter number";
//	cin>>mn;
	cin>>m.people;
	cout<<m.server;
};

int main()
{
    guest mb;
    int list;
    cout<<"enter value";
    cin>>list;
    while (true)
    {
        switch(list)
        {
            case 1:
            wedding;
            break;
            case 2:
           
            break;
        }
    }
    return 0;
}
