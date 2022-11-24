#include<iostream>

using namespace std;
class guest
{
	public:
	double people;
	string name;
	double time;

};
class rate_card : public guest
{
	public:
		int i;
		int hr;
		
		void shr()
		{
		
		
			hr=people*20;
		}
	
		

};
void wedding()
{
	rate_card a;
	cout<<"enter numberr of people";
	cin>>a.people;
	cout<<a.hr;
};
void marrige_anniversary()
{

};
void birthday_party()
{

};
int main()
{
	rate_card b;
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
		{
        	cout<<b.hr<<endl;
		}
        break;
        case 2:
        marrige_anniversary();
        break;
        case 3:
        birthday_party();       
       }
	   break;
	}
       
	return 0;
}
