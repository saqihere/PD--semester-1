

#include<iostream>
using namespace std;

void printMenu();                                                                               /* Function prototypes */
void calculateAggregate(string name, float matricMarks, float interMarks, float ecatMarks);
void compareMarks(string nameStd1, string nameStd2, int ecatMarksStd1, int ecatMarksStd2);

main ()
{
	int matricMarks, interMarks, ecatMarks, ecatMarksStd1, ecatMarksStd2;
	string name, nameStd1, nameStd2;
	printMenu();
	cout << endl<<endl;
cout << "                                                              _______________________"<<endl;
cout << "                                                              1. Calculate Aggregate "<<endl;
cout<<  "                                                              2. Compare Marks       "<<endl;
cout<<  "                                                              _______________________"<<endl;

cout<<"Select an option (1 or 2): ";
int option;
cin>>option;

if (option==1)
{calculateAggregate(name, matricMarks, interMarks, ecatMarks);}

if (option==2)
{compareMarks(nameStd1, nameStd2, ecatMarksStd1, ecatMarksStd2);}	
		


}

void printMenu()          
{
cout << "                              ____________________________________________________________________________________ "<<endl;
cout << "                              # # ### ### # # ### ##   ## ### ### # #         #   ##  # # ###  ##  ## ###  #   ### " <<endl;
cout << "                              # # # #  #  # # #   # # #    #   #  # #        # #  # # ###  #  #   #    #  # #  # # " <<endl;
cout << "                              # # # #  #  # # ### ##   #   #   #   #         ###  # # ###  #   #   #   #  # #  # # " <<endl;
cout << "                              # # # #  #  # # #   # #   #  #   #   #         # #  # # # #  #    #   #  #  # #  # # "  <<endl;
cout << "                              ### # # ###  #  ### # # ##  ###  #   #         # #  ##  # # ### ##  ##  ###  #   # # " <<endl;
cout<<endl;                                                                                                                    
cout << "                              # #  #  ###  #   ## ### # # ### ### ###                ## # #  ## ### ### # #        " <<endl;
cout << "                              ### # # # # # # #   #   ### #   # #  #                #   # # #    #  #   ###        " <<endl; 
cout << "                              ### ### # # ### # # ### ### ### # #  #                 #   #   #   #  ### ###        " <<endl;
cout << "                              # # # # # # # # # # #   # # #   # #  #                  #  #    #  #  #   # #        " <<endl;
cout << "                              # # # # # # # #  ## ### # # ### # #  #                ##   #  ##   #  ### # #        " <<endl;
cout << "                              ____________________________________________________________________________________ "<<endl;

}

void calculateAggregate(string name, float matricMarks, float interMarks, float ecatMarks)     /* This function calculates the aggreagte of the user in UET */
{
cout << "Enter your name: ";
cin >> name;
cout << "Enter your Matric marks: ";
cin >> matricMarks;
cout << "Enter your Inter marks: ";
cin >> interMarks;
cout << "Enter your ECAT marks: ";
cin >> ecatMarks;
float aggregate=(matricMarks/1100)*30+(interMarks/550)*30+(ecatMarks/400)*40;
cout << "Your total aggregate: "<<aggregate<<" %";
}

void compareMarks(string nameStd1, string nameStd2, int ecatMarksStd1, int ecatMarksStd2)       /* This function compare marks in ECAT of two students */
{
cout <<"Enter the name of first student: ";
cin >> nameStd1;
cout << "Enter ECAT marks of first student: ";
cin >> ecatMarksStd1;
cout << "Enter the name of second student: ";
cin >> nameStd2;
cout << "Enter ECAT marks of second student: ";
cin >> ecatMarksStd2;
		
		if (ecatMarksStd1>ecatMarksStd2)
		{cout<<nameStd1<<" has higher marks in ECAT than "<< nameStd2;} 
		
		if (ecatMarksStd1<ecatMarksStd2)
		{cout<<nameStd2<<" has higher marks in ECAT than "<< nameStd1;} 



}


