

#include<iostream>
using namespace std;

	void Reverse(string trueFalse);     

main () 

{
	cout << "Enter 'true' or 'false': ";
	string trueFalse;
	cin >> trueFalse;

	Reverse(trueFalse);          
}

void Reverse(string trueFalse)    

{	
	if (trueFalse == "true")
	{cout << "false";}
	if (trueFalse == "false")
	{cout << "true";}

} 