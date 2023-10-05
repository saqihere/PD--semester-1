

#include<iostream>
#include<windows.h>
using namespace std;

void myName();                   
void gotoxy(int x, int y);       


main ()
{

	system("cls");                
	gotoxy(50, 25);               
	myName();                 
	
}
void myName()
	{
cout <<"  ######  ##### #         #    #" <<endl;
gotoxy(50,26);
cout <<"   #    #   #   #        # #   #" <<endl;
gotoxy(50,27);
cout <<"   #    #   #   #       #   #  #" <<endl;
gotoxy(50,28);
cout <<"   #####    #   #      ####### #" <<endl;
gotoxy(50,29);
cout <<"   #    #   #   #      #     # #" <<endl;
gotoxy(50,30);
cout <<"   #    #   #   #      #     # #" <<endl;
gotoxy(50,31);
cout <<"  ######  ##### ###### #     # ######" <<endl;
}

void gotoxy(int x, int y)        
{
	COORD coordinates;
	coordinates.X=x;
	coordinates.Y=y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates); 
}

