/*pointers.cpp
Feb 16, 2017
ggonzalez
*/

#include <iostream>
using namespace std;

void printPointer()
{
	cout<<"Please enter integer A:"<<endl;
	int a;
	cin>> a;

	cout<<"Please enter integer B:"<<endl;
	int b;
	cin>> b;

	int* ptrA = &a;
	int* ptrB = &b;

	cout<<"PtrA:"<<ptrA<<endl;
	cout<<"PtrB:"<<ptrB<<endl;

}


void ptrmaxValue()
{
	int length;
	int max=0;
	int* ptrmax;
	cout<<"Please enter the number of data in the set:"<<endl;
	cin>>length;
	int data[length];

	for (int i = 0;i<length; i++)
	{
		cout<<"Please enter the data in the array:"<<endl;
		int datum;
		cin>>datum;
		data[i]=datum;
		if (datum>max)
		{
			max = datum;
			ptrmax = &max;
		}

	}

	cout<<"Max Value: "<<max<<"\t"<<"Max pointer: "<<ptrmax<<endl;
}


void valueByPointer()
{
	cout<<"Enter a integer:"<<endl;
	int a;
	cin>> a;
	int* ptrA;
	ptrA = &a;
	cout<< " The pointer values is "<< *ptrA << " the memory address is: "<< ptrA<<endl;


}


int main()
{
	/*
	 * Asks the user to enter integers as inputs to be stored in the variables
	 * 'a' and 'b' respectively. There are also two integer pointers named ptrA and ptrB.
	 * Assign the values of 'a' and 'b' to ptrA and ptrB respectively, and display them.
	 */
	//printPointer();

	/*
	 *Write a C++ program to find the max of an integral data set.
	 *Write The program will ask the user to input the number of data values in
	 *the set and each value.
	 *The program prints on screen a pointer that points to the max value
	 */
	//ptrmaxValue();

	/*
	 * Take input in variable and display same value by pointer.
	 */
	valueByPointer();

return 0;
}
