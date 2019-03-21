/*==============================================================
COURSE:	CSC125, Practice#4
PROGRAMMER:	Tyler Tracy (Tyler0)
LAST MODIFIED DATE:	2/07/2019
DESCRIPTION:	This program prints WAR
FILES:	war2.cpp
IDE/COMPILER:	MicroSoft Visual Studio 2017

INSTRUCTION FOR COMPILATION AND EXECUTION:
1. Double click on practiceProj.sln to OPEN the project
2. Press Ctrl+F7	to COMPILE
3. Press Ctrl+F5	to EXECUTE
===============================================================*/

#include<iostream>
using namespace std;

void main()
{
	char dcTL = 201, dcTR = 187, dcBL = 200, dcBR = 188, dHL = 205, dVL = 186;
	char cTL = 218, cTR = 191, cBL = 192, cBR = 217, VL = 179, HL = 196;
	char heart = 3, club = 5;

	cout << "  " << dcTL << dHL << dHL << dHL << dHL << dHL << dHL << dHL << dHL << dHL << dHL << dHL << dHL << dHL << dHL << dHL << dHL << dHL << dHL << dHL << dHL << dHL << dHL << dcTR <<  endl;
	cout << "  " << dVL <<" The card game: \"WAR\" " << dVL << endl;
	cout << "  " << dcBL << dHL << dHL << dHL << dHL << dHL << dHL << dHL << dHL << dHL << dHL << dHL << dHL << dHL << dHL << dHL << dHL << dHL << dHL << dHL << dHL << dHL << dHL << dcBR << endl;

	cout << "\n";
	cout << "  Your card      Opponent's card\n";
	cout << cTL << HL << HL << HL << HL << HL << HL << HL << HL << HL << HL << HL << cTR << "     " << cTL << HL << HL << HL << HL << HL << HL << HL << HL << HL << HL << HL << cTR << endl;
	cout << "" << VL << "5          " << VL << "     " << VL << "10         " << VL << "\n";
	cout << "" << VL << "           " << VL << "     " << VL << "           " << VL << "\n";
	cout << "" << VL << "           " << VL << "     " << VL << "           " << VL << "\n";
	cout << "" << VL << "     "<< heart << "     " << VL << "     " << VL << "     " << club << "     " << VL << "\n";
	cout << "" << VL << "           " << VL << "     " << VL << "           " << VL << "\n";
	cout << "" << VL << "           " << VL << "     " << VL << "           " << VL << "\n";
	cout << "" << VL << "          5" << VL << "     " << VL << "         10" << VL << "\n";
	cout << cBL << HL << HL << HL << HL << HL << HL << HL << HL << HL << HL << HL << cBR << "     " << cBL << HL << HL << HL << HL << HL << HL << HL << HL << HL << HL << HL << cBR << endl;
}
