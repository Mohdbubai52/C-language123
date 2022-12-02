#include<iostream>
using namespace std;
class guest
{
   
    public:
    int people;
    string name;
    double server;
    void People(int ppo)
    {
       ppo=people;
       cin>>ppo;
    }
    void Server(double sr)
    {
        sr=server;
        sr=people*20.7;
    }
};
void wedding()
{
    guest m;
    cout<<"Enter number";
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
