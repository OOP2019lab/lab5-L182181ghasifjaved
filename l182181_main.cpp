#include"l182181_ghasif.h"
using namespace std;
int main ()
{
	string  naam;
	int accno;
	int amount;
	int amount1;
	cout<<"enter the name";
	cin>>naam;
	cout<<"enter the account number";
	cin>>accno;
	bankaccount account();
	bankaccount account1(naam,accno);
	cout<<"Enter the amount to withdraw";
	cin>>amount;
	account1.withdraw(amount);
	cout<<"Enter the amount to deposit";
	cin>>amount1;
	account1.deposit(amount1);
	account1.print();
	account1.~bankaccount();
}