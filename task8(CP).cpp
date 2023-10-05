

#include<iostream>
using namespace std;

void pet(int holidays);            

main ()

{
	int holidays;
	cout << "Holidays: ";
	cin >> holidays;

	pet(holidays);      
}

void pet(int holidays)           
{
	int workingDays= 365-holidays;
	int timeForGames=(workingDays*63)+(holidays*127);
	int difference= 30000-timeForGames;
	int transformMin= difference%60;
	int transformHours= difference/60;
	
	if (timeForGames < 30000)
	{
	int difference= 30000-timeForGames;
	int transformMin= difference%60;
	int transformHours= difference/60;
	cout << "Tom sleeps well"<<endl;
	cout << transformHours<< " hours and "<< transformMin<<" minutes less for play";
	}

	if (timeForGames > 30000)
	{
	int difference=timeForGames-30000;
	int transformMin= difference%60;
	int transformHours= difference/60;	
	cout<<"Tom will run away"<<endl;
	cout<<transformHours<< " hours and "<< transformMin<<" minutes for play";
	}
	
}