/*===================================================================================
 PROGRAMMER(S):			Yang Wang
                        Tyler Tracy (Tyler0)
 COURSE:				CSC 125
 MODIFIED BY:			Tyler Tracy
 LAST MODIFIED DATE:	3/7/2019
 DESCRIPTION:			This program sorts two numbers in ascending order. 

 FILES:					sort.cpp, (practiceProj.sln, ...)
 IDE/COMPILER:			MicroSoft Visual Studio 2017
 INSTRUCTION FOR COMPILATION AND EXECUTION:
	1. Double click on practiceProj.slnto	OPEN the project
	2. Press Ctrl+F7						COMPILE
	3. Press Ctrl+F5						to EXECUTE
===================================================================================*/
#include<iostream>
using namespace std;

void main( )
{short int1 = 0, int2 = 0;

 // Step 1. Ask a user to enter two integers
 cout << "\nPlease enter two integers in the range of [-32768, 32767]: ";
 cin >> int1 >> int2;

 cout << "\nYou entered:       int1 = " << int1 << ", int2 = " << int2 << endl;

 // Step 2. Sort the numbers in ascending order
 if (int1 > int2) { short temp = int1; int1 = int2; int2 = temp; }

 // Step 3. Show the sorted result
 cout << "\nThe sorted result: int1 = " << int1 << ", int2 = " << int2 << endl << endl;
}
