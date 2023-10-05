

#include<iostream>
using namespace std;

void flowerShop(int redRose, int whiteRose, int tulip);       

main ()
{
	int redRose, whiteRose, tulip;

	cout << "Red Rose: ";
	cin >> redRose;
	cout << "White Rose: ";
	cin >> whiteRose;
	cout << "Tulips: ";
	cin >> tulip;

	flowerShop(redRose, whiteRose, tulip);       
}

void flowerShop(int redRose, int whiteRose, int tulip)      
{
	float originalPrice= (redRose*2.00)+(whiteRose*4.10)+(tulip*2.50);
	cout <<"Original Price: $"<< originalPrice<<endl;
	if (originalPrice > 200)
	{
	cout << "Price after Discount: $" << originalPrice*0.80;
	}
	if (originalPrice < 200)
	{
	cout << "No discount applied.";
	}

}