#include<iostream>
#include<string>
using namespace std;
class bankaccount
{
private:
	string name;//account holder's name
	int accountno;
	double balance;//amount present 
	int *transactions;
	int nooftrans;
	int size;//size of transaction array
	double limit; //limit of account balance
	void increasecapacity();
public:
	bankaccount();//default
	bankaccount(string naam,int accno);//constructor
	void withdraw(int amount);
	void deposit(int amount);
	void print();//print the accounht info on the screen 
	~bankaccount();//destructor
};