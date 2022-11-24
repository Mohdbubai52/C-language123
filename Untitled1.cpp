#include<iostream>
using namespace std;

class Bank
{
	private:
		int atmPin;
		float balance = 345451.3;
	public:
		int accNum =34534534;
		string IFSC= "SBI000N"; //char IFSC[20] ="HDFC000N";
		string bankname = "SBI Bank"; //char bankname[20] ="HDFC Bank";	
		
		void getAtmpin(int pin)//1234
		{
			atmPin = pin;
			cout<<atmPin<<endl;
		}
};
int main()
{
	Bank b;
	//cout<<b.atmPin<<endl;
	//cout<<b.balance<<endl;
	int aPin;
	cout<<"enter your pin:";
	cin>>aPin;//1234
	
	b.getAtmpin(aPin);
//	cin>>b.atmPin;
//	cout<<b.atmPin;
	
	cout<<b.accNum<<endl;
	cout<<b.IFSC<<endl;
	cout<<b.bankname<<endl;
	
	return 0;
}

