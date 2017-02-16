/*
cashier.cpp
Feb 16, 2017
josemacenteno
*/
#include <iostream>
using namespace std;

int calculate_coins(int& cents, int& quarters, int& dimes, int& nickels, int& pennies)
{
	quarters = cents/25;
	dimes = cents%25 /10;
	nickels = cents%25%10/5;
	pennies = cents%25%10%5;


}


int main()
{
// TODO: place code here
	double change, item_price, payment;
	int cents, dollars,quarters,dimes, nickels, pennies;
	cout<<"Introduce item's price:"<<endl;
	cin>>item_price;
	cout<<"Introduce payment:"<<endl;
	cin>>payment;
	change = payment - item_price;
	dollars = change;
	cents = change*100 - dollars*100;
	calculate_coins(cents, quarters, dimes, nickels, pennies);
	cout<<"dollars:"<<dollars<<"\t"<<"quarters:"<<quarters<<"\t"<<"dimes:"<<dimes<<"\t\t"<<"nickels:"<<nickels<<"\t"<<"pennies:"<<pennies<<"\t"<<endl;

return 0;

}


