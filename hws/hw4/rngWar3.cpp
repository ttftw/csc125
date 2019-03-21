/*
COURSE:	CSC125, Homework#4
PROGRAMMER:	Tyler Tracy (Tyler0)
LAST MODIFIED DATE:	3/20/2019
DESCRIPTION:	This program generates psudorandom card for War
FILES:	rngWar3.cpp
IDE/COMPILER:	MicroSoft Visual Studio 2017

INSTRUCTION FOR COMPILATION AND EXECUTION:
1. Double click on hwProj.sln to OPEN the project
2. Press Ctrl+F7	to COMPILE
3. Press Ctrl+F5	to EXECUTE
*/

#include<iostream>
#include <iomanip>
#include <ctime>
#include <string>
using namespace std;

int main() {
	const char dcTL = 201, dcTR = 187, dcBL = 200, dcBR = 188, dcHL = 205, dcVL = 186;
	const char cTL = 218, cTR = 191, cBL = 192, cBR = 217, cVL = 179, cHL = 196;

	const string deck[] = { "2", "3", "4", "5", "6", "7", "8", "9", "10", "J", "Q", "K", "A" };

	srand(time(NULL));

	int myCard = (rand() % 13), opCard = (rand() % 13);
	char mySuit = 3 + (rand() % 4), opSuit = 3 + (rand() % 4);

	// This is to make sure we pick a unique card.
	if ((myCard == opCard) && (mySuit == opSuit)) {
		if (mySuit == 6) mySuit--;
		else mySuit++;
	}
	
	string outcome = "This is a tie game.";
	if (myCard != opCard) outcome = (myCard > opCard) ? "Congratulations.  You win this battle!" : "Sorry.  You lost this battle!";

	cout << "    " << dcTL << string(20, dcHL) << dcTR << endl;
	cout << "    " << dcVL << "The card game: \"WAR\"" << dcVL << endl;
	cout << "    " << dcBL << string(20, dcHL) << dcBR << endl << endl;

	cout << "  Your Card    Opponent's Card" << endl;
	cout << cTL << string(11, cHL) << cTR << "\t" << cTL << string(11, cHL) << cTR << endl;
	cout << cVL << setw(11) << left << deck[myCard] << cVL << "\t" << cVL << setw(11) << deck[opCard] << cVL << endl;
	cout << cVL << string(11, 32) << cVL << "\t" << cVL << string(11, 32) << cVL << endl;
	cout << cVL << string(11, 32) << cVL << "\t" << cVL << string(11, 32) << cVL << endl;
	cout << cVL << "     " << mySuit << "     " << cVL << "\t" << cVL << "     " << opSuit << "     " << cVL << endl;
	cout << cVL << string(11, 32) << cVL << "\t" << cVL << string(11, 32) << cVL << endl;
	cout << cVL << string(11, 32) << cVL << "\t" << cVL << string(11, 32) << cVL << endl;
	cout << cVL << setw(11) << right << deck[myCard] << cVL << "\t" << cVL << setw(11) << deck[opCard] << cVL << endl;
	cout << cBL << string(11, cHL) << cBR << "\t" << cBL << string(11, cHL) << cBR << endl;

	cout << outcome << endl << endl;
}