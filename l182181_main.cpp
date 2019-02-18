#include"l182181_ghasif.h"
using namespace std;
int main ()
{
	string  naam;
	int accno;
	int amount;//amount to withdraw
	int amount1;//amount to deposit
	cout<<"enter the name";
	cin>>naam;
	cout<<"enter the account number";
	cin>>accno;
	bankaccount account();
	bankaccount account1(naam,accno);
	cout<<"\nEnter the amount to deposit";
	cin>>amount1;
	account1.deposit(amount1);
	cout<<"\nEnter the amount to withdraw";
	cin>>amount;
	account1.withdraw(amount);
	account1.print();//print the record
	system("pause");
	return 0;
}