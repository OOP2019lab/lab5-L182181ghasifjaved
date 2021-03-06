#include"l182181_ghasif.h"
using namespace std;
bankaccount::bankaccount()
{
	name="\0";
	accountno=0;
	balance=0;
	size=10;
	transactions=nullptr;
	transactions=new int[size];
	nooftrans=0;
	limit=200000;
}
bankaccount::bankaccount(string naam,int accno)
{
	name=naam;
	accountno=accno;
	balance=0;
	size=10;
	transactions=nullptr;
	transactions=new int[size];
	nooftrans=0;
	limit=200000;
}
void bankaccount::deposit(int amount)
{
	if(balance+amount<limit)//if the limit is not exceeded
	{
		balance+=amount;
		if(nooftrans<size)//check for limit of no of transaction
		{
			transactions[nooftrans]=amount;
			nooftrans++;
			cout<<"successfull";
		}
		else
		{
			cout<<"transaction limit exceeded";
			void increasecapacity();
		}
	}
	else
	{
		char a='\0';
		cout<<"you have reached your limit of deposit, if you want to extend it we will cut 500 from your account(Y/N)";
		cin>>a;
		if(a=='y'||a=='Y')
		{
			limit=2*(balance+amount);//double the limit of balance
			balance+=amount;
			balance-=500;
			if(nooftrans<size)//check for limit of no of transaction
			{
				transactions[nooftrans]=amount;
				nooftrans++;
				cout<<"successfull";
			}
			else
			{
				cout<<"transaction limit exceeded";
				void increasecapacity();
			}
		}
	}
}
void bankaccount::withdraw(int amount)
{
	if(balance>amount)
	{
		balance-=amount;
		if(nooftrans<size)//check for limit of no of transaction
		{
			transactions[nooftrans]=-amount;
			nooftrans++;
			cout<<"successfull";
		}
		else
		{
			cout<<"transaction limit exceeded";
			void increasecapacity();
		}
	}
}
void bankaccount::increasecapacity()//increase in the capacity of array
{
	int *tempo=new int[size];
	size*=2;
	delete[] transactions;
	transactions=new int[size];
	for(int i=0;i<size/2;i++)
	{

		transactions[i]=tempo[i];
	}
}
void bankaccount::print()
{
	cout<<"Account holder's Name : "<<name;
	cout<<"\nAccount number : "<<accountno;
	cout<<"\nBalance : "<<balance;
	cout<<"\nNo. of transactions : "<<nooftrans<<endl;
	for(int i=0;i<nooftrans;i++)
		cout<<(i+1)<<"th transaction"<<transactions[i]<<endl;
}
bankaccount::~bankaccount()
{
	delete[] transactions;
	transactions=nullptr;
}