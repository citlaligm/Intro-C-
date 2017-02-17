/*
Menu.cpp
Feb 17, 2017
ggonzalez
*/
#include <iostream>
#include <iomanip>


using namespace std;

int main()
{
	string menu[] = {"Hamburguer","Salad","French Fries", "Wings"};
	double prices[] = {10.0,9.0,4.50,9.0};
	int quantity, selection;



	do {
		cout<<"This is our menu"<<endl;
		for (int var = 0; var <4; ++var) {
			cout<<var+1<<". ";
			cout<<setw(20)<<fixed<<setprecision(2)<<left;
			cout<<menu[var]<<prices[var]<<endl;

			}

		cout<<"5 Exit\n";
		cout<<"Please select an option:"<<endl;
		cin>> selection;
		if (selection == 5){
			break;
		}
		cout<<"How many do you want?"<<endl;
		cin>> quantity;
		cout<<"Your total is: "<<quantity*prices[selection-1]<<"\n"<<endl;

	} while (selection != 5);



return 0;

}
