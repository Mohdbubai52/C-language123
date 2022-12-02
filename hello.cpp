#include<iostream>
using namespace std;
class guest
{
    public:
    string name;
    int people;

};
int main()
{
    guest mmb;
    int test,time;
    int CostPerHours,CostPerMin;
    double Cost1,Cost2,CostForOneServer,AverageCost;
    double server,TotalFoodCost,TotalCost,Deposit;
    cout<<"***********EVENT MANAGEMENT SYSTEM**********"<<endl;
    cout<<"WELCOME"<<endl;
    cout<<"enter your option"<<endl;
    cout<<"1.wedding"<<endl;
    cout<<"2.marriage anniversary"<<endl;
    cout<<"3.birthday party"<<endl;
    cout<<"Enter your option";
    cin>>test;
    //tow input name and total number of people
    switch(test)
    {
        case 1:
        cout<<"wedding"<<endl;
        cout<<"Enter your name ";
        cin>>mmb.name;
        cout<<"number of people come in your function";
        cin>>mmb.people;     
        break;

        case 2:
        cout<<"marriage anniversary"<<endl;
        cout<<"Enter your name ";
        cin>>mmb.name;
        cout<<"number of people come in your function";
        cin>>mmb.people;
        break;

        case 3:
        cout<<"birthday party"<<endl;
        cout<<"Enter your name ";
        cin>>mmb.name;
        cout<<"number of people come in your function";
        cin>>mmb.people;
        break;

        default:
        cout<<"invailad option";
        break;
        
    }
    //time
	cout<<"Enter number of hours in the envent";
    cin>>time;
	cout<<"=================Event estimation for  "<<mmb.name<<"  ================="<<endl;
	server=mmb.people/20;
	cout<<"Number of server is requried is "<<server<<endl;
	
	//cost of one server is
	Cost1=(time/60)*18.50;
	Cost2=(time%60)*.40;
	CostForOneServer=Cost1+Cost2;
	cout<<"The Cost For Server is: "<<"rs"<<CostForOneServer<<endl;
	
	//to get the cost of food
	TotalFoodCost=mmb.people*20.70;
	cout<<"The Cost of Dinner is : "<<TotalFoodCost<<"rs"<<endl;
	
	//to get average cost
	AverageCost=TotalFoodCost/mmb.people;
	cout<<"Avergae Cost per Person : "<<AverageCost<<"rs"<<endl<<endl;
	//total cost of event is
	TotalCost=TotalFoodCost+(CostForOneServer*server);
	cout<<"Total Cost is : "<<TotalCost<<"rs"<<endl;
	
	//to get deposit amount
	cout<<"please deposit 25% of amount to reserve your event"<<endl;
	Deposit=TotalCost*.25;
	cout<<"deposit money needed to reserve your event is "<<Deposit<<"rs"<<endl;
	
    return 0;
}
