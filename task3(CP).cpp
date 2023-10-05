

#include<iostream>
using namespace std;

void discountPrice(string country, float ticketPrice);     

main ()
{
	string country;
	float ticketPrice;       
	
	cout << "Enter the country's name: ";
	cin >> country;
	cout << "Enter the ticket price in dollars: $";
	cin >> ticketPrice;
	discountPrice(country, ticketPrice);    
}

void discountPrice(string country, float ticketPrice)           
{
	float discountedTicket;
	if (country == "Pakistan")
	{
	discountedTicket = (ticketPrice*0.95);
	cout << "Final ticket price after discount: $" << discountedTicket;
	}

	if (country == "India")
	{
	discountedTicket = (ticketPrice*0.80);
	cout << "Final ticket price after discount: $" << discountedTicket;
	}

	if (country == "Ireland")
	{
	discountedTicket = (ticketPrice*0.90);
	cout << "Final ticket price after discount: $" << discountedTicket;
	}

	if (country == "England")
	{
	discountedTicket = (ticketPrice*0.70);
	cout << "Final ticket price after discount: $" << discountedTicket;
	}

	if (country == "Canada")
	{
	discountedTicket = (ticketPrice*0.55);
	cout << "Final ticket price after discount: $" << discountedTicket;
	}
}