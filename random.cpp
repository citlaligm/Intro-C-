/*random.cpp
Feb 12, 2017
ggonzalez
*/

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>


using namespace std;

int main()
{
	srand(time(0));
	int count = 0;
	for (int i = 0;i<100;i++)
	{
		int die1 = rand()%6 + 1;
		int die2 = rand()%6 + 1;
		//adds space between results. 2 columns
		cout<<setw(1)<<die1<<setw(6)<<die2;
		if(die1 == 1 && die2 == 1)
		{
			cout<<"  Yikes!";
			count ++;
		}
		cout<<endl;
	}
	//Print how many times both of the dice were 1
	cout<<"There were "<<count<<" yikes"<<endl;
return 0;
}
