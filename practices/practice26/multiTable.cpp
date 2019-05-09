/*===================================================================================
 PROGRAMMER(S):			Yang Wang
						Tyler Tracy \\tyler0
 COURSE:				CSC 125
 MODIFIED BY:			N/A
 LAST MODIFIED DATE:	4/29/2019
 DESCRIPTION:			To use a 2D array for operations on a multiplication table.
 
 NOTE:					To be completed.

 FILES:					multiTable.cpp, (practiceProj.sln, ...)
 COMPILER:				MicroSoft Visual Studio 2017
 INSTRUCTION FOR COMPILATION AND EXECUTION:
	1.		Double click on practiceProj.slnto OPEN the project
	2.		Press Ctrl+F7					to COMPILE
	3.		Press Ctrl+F5					to EXECUTE
===================================================================================*/
#include <iomanip>
#include <iostream>
using namespace std;

void main() {
	const unsigned short rowNum = 9, colNum = 9;
	unsigned short		  row, column, mTable[rowNum][colNum];
 
	cout << "\n              The Standard Multiplication Table\n"
		<< "\n***********************************************************\n\n";

	for (row = 0; row < rowNum; row++)
		for (column = 0; column < colNum; column++)
			mTable[row][column] = (row + 1) * (column + 1);

	for (row = 0; row < rowNum; row++)
		for (column = 0; column < colNum; column++)
			cout << setw(6) << mTable[row][column];
		cout << endl;

	cout << "\n***********************************************************\n\n";
}
