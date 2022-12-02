//event management system assingment 
#include<iostream>
using namespace std;
//this first class is only for input catagaory only....
class guest
{
    public:
    int time,guest;
    string first_name,last_name;
    void mtime(int stime)
    {
        time=stime;
    };
    void mguest(int sguest)
    {
        guest=sguest;
    };
    void mfirst_name(string gname)
    {
        first_name=gname;
    };
    void mlast_name(string mName)
    {
        last_name=mName;
    };
  

};
class rate_card
{
    
    public:
    int CostPerHour, CostPerMinute,CostOfDinner;
    void scost(int mcost)
    {
        CostPerHour=mcost;
    };
    void smin(int mmin)
    {
        CostPerMinute=mmin;
    };
    void sdinner(int mdinner)
    {
        CostOfDinner=mdinner;
    };

};
void wedding()
{
    guest mmb;
    int hours,people;
    string name,last;
    cout<<"____________________________________________________"<<endl;
    cout<<"Enter your first name....";
    cin>>name;
    mmb.mfirst_name(name);
    cout<<"enter your last name.....";
    cin>>last;
    mmb.mlast_name(last);
    cout<<"enter you time should event take to complet in hours......";
    cin>>hours;
    mmb.mtime(hours);
    cout<<"Total number of guest came in your party........";
    cin>>people;
    mmb.mguest(people);
};

void marrige_anniversary()
{
    guest mmb;
    int hours,people;
    string name,last;
    cout<<"____________________________________________________"<<endl;
    cout<<"Enter your first name....";
    cin>>name;
    mmb.mfirst_name(name);
    cout<<"enter your last name.....";
    cin>>last;
    mmb.mlast_name(last);
    cout<<"enter you time should event take to complet in hours......";
    cin>>hours;
    mmb.mtime(hours);
    cout<<"Total number of guest came in your party........";
    cin>>people;
    mmb.mguest(people);
};

void birthday_party()
{
    guest mmb;
    int hours,people;
    string name,last;
    cout<<"____________________________________________________"<<endl;
    cout<<"Enter your first name....";
    cin>>name;
    mmb.mfirst_name(name);
    cout<<"enter your last name.....";
    cin>>last;
    mmb.mlast_name(last);
    cout<<"enter you time should event take to complet in hours......";
    cin>>hours;
    mmb.mtime(hours);
    cout<<"Total number of guest came in your party........";
    cin>>people;
    mmb.mguest(people);

};

void family_gathering()
{
    guest mmb;
    int hours,people;
    string name,last;
    cout<<"____________________________________________________"<<endl;
    cout<<"Enter your first name....";
    cin>>name;
    mmb.mfirst_name(name);
    cout<<"enter your last name.....";
    cin>>last;
    mmb.mlast_name(last);
    cout<<"enter you time should event take to complet in hours......";
    cin>>hours;
    mmb.mtime(hours);
    cout<<"Total number of guest came in your party........";
    cin>>people;
    mmb.mguest(people);

};
void other_option()
{
    guest mmb;
    int hours,people;
    string name,last;
    cout<<"____________________________________________________"<<endl;
    cout<<"Enter your first name....";
    cin>>name;
    mmb.mfirst_name(name);
    cout<<"enter your last name.....";
    cin>>last;
    mmb.mlast_name(last);
    cout<<"enter you time should event take to complet in hours......";
    cin>>hours;
    mmb.mtime(hours);
    cout<<"Total number of guest came in your party........";
    cin>>people;
    mmb.mguest(people);

};


int main()
{
    guest pb;
    int event_name;
    while(true)
    {
    cout<<"***************EVENT MANAGEMENT SYATEM***************\n"<<endl;
    cout<<"enter the event name"<<endl;
    cout<<"1.wedding"<<endl;
    cout<<"2.marrige anniversary"<<endl;
    cout<<"3.Birthday party"<<endl;
    cout<<"4.family gathering"<<endl;
    cout<<"5.other option...."<<endl;
    cout<<"Now enter your your event between this...";
    cin>>event_name;
    
    switch(event_name)
    {
       case 1 : 
       wedding(); 
       break;
       case 2 :
       marrige_anniversary();
       break;
       case 3:
       birthday_party();
       break;
       case 4:
       family_gathering();
       break;
       case 5:
       other_option();
       break;
       default:
       cout<<"invalid input"<<endl;
        
    };
	break;
   
 
    }

    return 0;
}
