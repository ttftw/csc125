/*==============================================================
COURSE:	CSC125, Practice#9
PROGRAMMER:	Tyler Tracy (Tyler0)
LAST MODIFIED DATE:	2/25/2019
DESCRIPTION:	This program generates psudorandom card for War
FILES:	rngWar2.cpp
IDE/COMPILER:	MicroSoft Visual Studio 2017

INSTRUCTION FOR COMPILATION AND EXECUTION:
1. Double click on practiceProj.sln to OPEN the project
2. Press Ctrl+F7	to COMPILE
3. Press Ctrl+F5	to EXECUTE
===============================================================*/

#include<iostream>
#include <iomanip>
#include <ctime>

using namespace std;
int main() {
	const char dcTL = 201, dcTR = 187, dcBL = 200, dcBR = 188, dHL = 205, dVL = 186;
	const char cTL = 218, cTR = 191, cBL = 192, cBR = 217, VL = 179, HL = 196;

	const short min = 2, max = 14;
	const short range = max - min + 1;

	srand(time(NULL));

	int myCard = min + (rand() % range), opCard = min + (rand() % range);
	char mySuit = 3 + (rand() % 4), opSuit = 3 + (rand() % 4);

	cout << "  " << dcTL << dHL << dHL << dHL << dHL << dHL << dHL << dHL << dHL << dHL << dHL << dHL << dHL << dHL << dHL << dHL << dHL << dHL << dHL << dHL << dHL << dHL << dHL << dcTR << endl;
	cout << "  " << dVL << " The card game: \"WAR\" " << dVL << endl;
	cout << "  " << dcBL << dHL << dHL << dHL << dHL << dHL << dHL << dHL << dHL << dHL << dHL << dHL << dHL << dHL << dHL << dHL << dHL << dHL << dHL << dHL << dHL << dHL << dHL << dcBR << endl;

	cout << "\n";
	cout << "  Your card      Opponent's card\n";
	cout << cTL << HL << HL << HL << HL << HL << HL << HL << HL << HL << HL << HL << cTR << "     " << cTL << HL << HL << HL << HL << HL << HL << HL << HL << HL << HL << HL << cTR << endl;
	cout << "" << VL << setw(2) << left << myCard << "         " << VL << "     " << VL << setw(2) << left << opCard << "         " << VL << "\n";
	cout << "" << VL << "           " << VL << "     " << VL << "           " << VL << "\n";
	cout << "" << VL << "           " << VL << "     " << VL << "           " << VL << "\n";
	cout << "" << VL << "     " << mySuit << "     " << VL << "     " << VL << "     " << opSuit << "     " << VL << "\n";
	cout << "" << VL << "           " << VL << "     " << VL << "           " << VL << "\n";
	cout << "" << VL << "           " << VL << "     " << VL << "           " << VL << "\n";
	cout << "" << VL << "         " << setw(2) << right << myCard << VL << "     " << VL << "         " << setw(2) << right << opCard << VL << "\n";
	cout << cBL << HL << HL << HL << HL << HL << HL << HL << HL << HL << HL << HL << cBR << "     " << cBL << HL << HL << HL << HL << HL << HL << HL << HL << HL << HL << HL << cBR << endl;
}