/*===================================================================================
PROGRAMMERS:			Yang Wang: designed and implemented function main( )
						Tyler Tracy \\Tyler0:	designed and implemented functions 
												getLength() valid() drawAline()
COURSE:					CSC 125
MODIFIED BY:			N/A
LAST MODIFIED DATE:		05/02/2019
DESCRIPTION:			This program is to draw a horizontal line with character '*'

FILES:					line.cpp, testProject.sln
IDE/COMPILER:			MicroSoft Visual Studio 2017
INSTRUCTION FOR COMPILATION AND EXECUTION:
1.	Double click on testProject.sln	to OPEN the project
2.	Press Ctrl+F7					to COMPILE
3.	Press Ctrl+F5					to EXECUTE
===================================================================================*/
#include <iostream>
using namespace std;

void getLength(unsigned short&);
bool valid(unsigned short);
void drawAline(unsigned short);

/*----------------------------------------------------------------------------
Function main() is given and you should NOT change anyting in this function.
-----------------------------------------------------------------------------*/
int main()
{
	unsigned short length = 0;

	getLength(length);
	if (valid(length))
		drawAline(length);
	else
		cout << "\n *** Error: you entered an invalid length, "
		<< "the program terminates. ***\n\n";

	return 0;
}

void getLength(unsigned short& len) {
	cout << "Please enter an integer between 1-80> ";
	cin >> len;
}

bool valid(unsigned short len) {
	return ((len >= 1) && (len <= 80));
}

void drawAline(unsigned short len) {
	for (int i = 1; i <= len; i++) cout << '*';
	cout << endl;
}