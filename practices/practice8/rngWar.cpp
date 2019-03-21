/*==============================================================
COURSE:	CSC125, Practice#8
PROGRAMMER:	Tyler Tracy (Tyler0)
LAST MODIFIED DATE:	2/22/2019
DESCRIPTION:	This program generates psudorandom card for War
FILES:	rngWar.cpp
IDE/COMPILER:	MicroSoft Visual Studio 2017

INSTRUCTION FOR COMPILATION AND EXECUTION:
1. Double click on practiceProj.sln to OPEN the project
2. Press Ctrl+F7	to COMPILE
3. Press Ctrl+F5	to EXECUTE
===============================================================*/

#include<iostream>
#include <ctime>

using namespace std;
int main() {
	const char dcTL = 201, dcTR = 187, dcBL = 200, dcBR = 188, dHL = 205, dVL = 186;
	const char cTL = 218, cTR = 191, cBL = 192, cBR = 217, VL = 179, HL = 196;
	const char heart = 3, club = 5;

	const short min = 2, max = 9;
	const short range = max - min + 1;

	srand(time(NULL));

	int myCard = min + (rand() % range), opCard = min + (rand() % range);

	cout << "  " << dcTL << dHL << dHL << dHL << dHL << dHL << dHL << dHL << dHL << dHL << dHL << dHL << dHL << dHL << dHL << dHL << dHL << dHL << dHL << dHL << dHL << dHL << dHL << dcTR << endl;
	cout << "  " << dVL << " The card game: \"WAR\" " << dVL << endl;
	cout << "  " << dcBL << dHL << dHL << dHL << dHL << dHL << dHL << dHL << dHL << dHL << dHL << dHL << dHL << dHL << dHL << dHL << dHL << dHL << dHL << dHL << dHL << dHL << dHL << dcBR << endl;

	cout << "\n";
	cout << "  Your card      Opponent's card\n";
	cout << cTL << HL << HL << HL << HL << HL << HL << HL << HL << HL << HL << HL << cTR << "     " << cTL << HL << HL << HL << HL << HL << HL << HL << HL << HL << HL << HL << cTR << endl;
	cout << "" << VL << myCard << "          " << VL << "     " << VL << opCard << "          " << VL << "\n";
	cout << "" << VL << "           " << VL << "     " << VL << "           " << VL << "\n";
	cout << "" << VL << "           " << VL << "     " << VL << "           " << VL << "\n";
	cout << "" << VL << "     " << heart << "     " << VL << "     " << VL << "     " << club << "     " << VL << "\n";
	cout << "" << VL << "           " << VL << "     " << VL << "           " << VL << "\n";
	cout << "" << VL << "           " << VL << "     " << VL << "           " << VL << "\n";
	cout << "" << VL << "          " << myCard << VL << "     " << VL << "          " << opCard << VL << "\n";
	cout << cBL << HL << HL << HL << HL << HL << HL << HL << HL << HL << HL << HL << cBR << "     " << cBL << HL << HL << HL << HL << HL << HL << HL << HL << HL << HL << HL << cBR << endl;
}