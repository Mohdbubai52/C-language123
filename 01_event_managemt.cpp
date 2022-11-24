//oop event management system using cpp program
//first using class 

#include<iostream>
using namespace std;

void wedding()
{
    
};
void marrige_anniversary()
{

};
void birthday_party()
{

};
void family_gathering()
{

};


int main()
 {
   
    int event_name;
    while(true)
    {
    cout<<"***************EVENT MANAGEMENT SYATEM***************\n"<<endl;
    cout<<"enter the event name"<<endl;
    cout<<"1.wedding"<<endl;
    cout<<"2.marrige anniversary"<<endl;
    cout<<"3.Birthday party"<<endl;
    cout<<"4.family gathering"<<endl;
    cout<<"Now enter your option...";
    cin>>event_name;
    
    switch(event_name)
    {
       case 1 : 
       wedding();
       {
        cout<<"hello"<<endl;
       };
       
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

       default:
       cout<<"invalid input"<<endl;
        
    };
	break;
    }
    
    return 0;
}

