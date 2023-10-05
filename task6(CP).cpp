

#include<iostream>
using namespace std;

void longestTime(int h, int m);

main ()
{
	int hours, minutes;
	cout << "Enter the number of hours: ";
	cin >> hours;
	cout << "Enter the number of minutes: ";
	cin >> minutes;
	longestTime(hours, minutes);
}

void longestTime(int h, int m)
{
	if (h*60 > m)
	{cout<<h;}
	if (h*60 < m)
	{cout << m;}
}