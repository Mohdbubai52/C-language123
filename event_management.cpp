#include<iostream>

using namespace std;
class guest
{
    public:
    double time;
    int people;
    char fname[30],lname[30];
};
class rate_card
{
    public:
    double dinner,hours;
    // int i;
    // void dinner(double sdinner)
    // {
    //     dinner=i*20.7;
    // };
    // void hours(int shours)
    // {
    //     hours=i*18.5;
    // };
};
class server
{
    guest mm;
    public:
    double servant;
//     void servant(int sserver)
//     {
//        servant=mm.people%20;
//     };
};
void wedding()
{
    guest m;
    rate_card b;
    server o;
    int i;
    cout<<"Enter your first name...";
    cin>>m.fname;
    cout<<"Enter your last name....";
    cin>>m.lname;
    cout<<"Enter how much time take to complete to end your fucnction in hours";
    cin>>m.time;
    cout<<"how many guest you invited in your function";
    cin>>i;
    cout<<"server requried for your event.."<<o.servant<<endl;
    
};
void marrige_anniversary()
{
     guest m;
    cout<<"Enter your first name...";
    cin>>m.fname;
    cout<<"Enter your last name....";
    cin>>m.lname;
    cout<<"Enter how much time take to complete to end your fucnction in hours";
    cin>>m.time;
    cout<<"how many guest you invited in your function";
    cin>>m.people;

};
void birthday_party()
{
     guest m;
    cout<<"Enter your first name...";
    cin>>m.fname;
    cout<<"Enter your last name....";
    cin>>m.lname;
    cout<<"Enter how much time take to complete to end your fucnction in hours";
    cin>>m.time;
    cout<<"how many guest you invited in your function";
    cin>>m.people;

};
int main()
{
    int event_name;
    while(true)
    {
       cout<<"***********EVENT MANAGEMENT SYSTEM**********"<<endl;
       cout<<"WELCOME"<<endl;
       cout<<"enter your option"<<endl;
       cout<<"1.wedding"<<endl;
       cout<<"2.marriage anniversary"<<endl;
       cout<<"3.birthday party"<<endl;
       cout<<"Enter your option";
       cin>>event_name;

       switch(event_name)
       {
        case 1:
        wedding();
        break;
        case 2:
        marrige_anniversary();
        break;
        case 3:
        birthday_party();       
       }
       break;
        
    };
    return 0;
};
