
#include<iostream>
using namespace std;
	void isEqual(int x, int y);      
main () 
{
	int num1,num2;              
	cout << "Enter the first number: ";
	cin >> num1;
	cout << "Enter the second number: ";
	cin >> num2;
	isEqual(num1, num2);           
}

void isEqual(int x, int y)       
{
	
	if (x==y)
	{cout << "true";}
	if (x!=y)
	{cout << "false";}
}
