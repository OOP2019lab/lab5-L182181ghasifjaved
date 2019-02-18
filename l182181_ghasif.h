#include<iostream>
#include<string>
using namespace std;
class bankaccount
{
private:
	string name;
	int accountno;
	double balance;
	int *transactions;
	int nooftrans;
	int size;
	double limit;
	void increasecapacity();
public:
	bankaccount();
	bankaccount(string naam,int accno);
	void withdraw(int amount);
	void deposit(int amount);
	void print();
	~bankaccount();
};