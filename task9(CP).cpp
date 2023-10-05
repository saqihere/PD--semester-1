

#include<iostream>
using namespace std;

void tpChecker(int people, int tp);          

main()
{
	int people, tp;

	cout <<"Number of people in the household: ";
	cin >> people;
	cout <<"Number of rolls of TP: ";
	cin >> tp;

	tpChecker(people, tp);     
}

void tpChecker(int people, int tp)      

{
	int tpUsedPerDay = people*57;
	int tpSheets= tp*500;
	int daysInWhichTPfinishes=tpSheets/tpUsedPerDay;
	
	if (daysInWhichTPfinishes < 14)
	{
	cout << "Your TP will only last "<<daysInWhichTPfinishes<< " days, buy more!";
	}
	
	if (daysInWhichTPfinishes >= 14)
	{
	cout <<"Your TP will last "<<daysInWhichTPfinishes<<" days, no need to panic!";
	}

}