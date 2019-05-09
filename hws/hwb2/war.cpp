/*===================================================================================
 PROGRAMMER(S):			Yang Wang: designed and implemented function main( )
						Tyler Tracy \\tyler0
 COURSE:				CSC 125
 MODIFIED BY:			Tyler Tracy
 LAST MODIFIED DATE:	4/24/2019
 DESCRIPTION:			This program is to simulate multiple battles of the card
							game: WAR.

 FILES:					war.cpp, hwProj.sln
 IDE/COMPILER:			MicroSoft Visual Studio 2017
 INSTRUCTION FOR COMPILATION AND EXECUTION:
	1.	Double click on xxx.sln			to OPEN the project
	2.	Press Ctrl+F7					to COMPILE
	3.	Press Ctrl+F5					to EXECUTE
===================================================================================*/
#include<ctime>
#include<iostream>
#include<iomanip>
#include<map>
#include<string>
using namespace std;

/*----------------------------------------------------------------------------
 Function main() is given and you should NOT change anyting in this function.
 -----------------------------------------------------------------------------*/
int main()
{
	unsigned short yourFaceValue, opponentFaceValue,
		totalBattles = 0, youWon = 0, tie = 0;
	char			yourSuit, opponentSuit;

	preparation();	// initial operations that do not need to be repeated in each 
				   // hand of the game
	do
	{
		drawCards(yourFaceValue, yourSuit, opponentFaceValue, opponentSuit);
		displayCards(yourFaceValue, yourSuit, opponentFaceValue, opponentSuit);
		statistics(yourFaceValue, opponentFaceValue, totalBattles, youWon, tie);
	} while (continueBattle());

	cout << "\n\n\t********** Game is over! **********\n\n";
	return 0;
}

void preparation() {
	srand(time(NULL));
}

void drawCards(unsigned short &myCard, char &mySuit, unsigned short &opCard, char &opSuit) {
	myCard = (rand() % 13), opCard = (rand() % 13);
	mySuit = 3 + (rand() % 4), opSuit = 3 + (rand() % 4);

	// This is to make sure we pick a unique card.
	if ((myCard == opCard) && (mySuit == opSuit)) {
		if (mySuit == 6) mySuit--;
		else mySuit++;
	}
}

void displayCards(unsigned short &myCard, char &mySuit, unsigned short &opCard, char &opSuit) {
	const char dcTL = 201, dcTR = 187, dcBL = 200, dcBR = 188, dcHL = 205, dcVL = 186;
	const char cTL = 218, cTR = 191, cBL = 192, cBR = 217, cVL = 179, cHL = 196;
	const string deck[] = { "2", "3", "4", "5", "6", "7", "8", "9", "10", "J", "Q", "K", "A" };

	system("CLS");
	cout << "    " << dcTL << string(20, dcHL) << dcTR << endl;
	cout << "    " << dcVL << "The card game: \"WAR\"" << dcVL << endl;
	cout << "    " << dcBL << string(20, dcHL) << dcBR << endl;

	cout << endl << "  Your Card    Opponent's Card" << endl;
	cout << cTL << string(11, cHL) << cTR << "\t" << cTL << string(11, cHL) << cTR << endl;
	cout << cVL << setw(11) << left << deck[myCard] << cVL << "\t" << cVL << setw(11) << deck[opCard] << cVL << endl;
	cout << cVL << string(11, ' ') << cVL << "\t" << cVL << string(11, ' ') << cVL << endl;
	cout << cVL << string(11, ' ') << cVL << "\t" << cVL << string(11, ' ') << cVL << endl;
	cout << cVL << "     " << mySuit << "     " << cVL << "\t" << cVL << "     " << opSuit << "     " << cVL << endl;
	cout << cVL << string(11, ' ') << cVL << "\t" << cVL << string(11, ' ') << cVL << endl;
	cout << cVL << string(11, ' ') << cVL << "\t" << cVL << string(11, ' ') << cVL << endl;
	cout << cVL << setw(11) << right << deck[myCard] << cVL << "\t" << cVL << setw(11) << deck[opCard] << cVL << endl;
	cout << cBL << string(11, cHL) << cBR << "\t" << cBL << string(11, cHL) << cBR << endl;
}

void statistics(unsigned short &myCard, unsigned short &opCard, unsigned short &battles, unsigned short &wins, unsigned short &ties) {
	map<string, string> msg{
		{ "win", "Congratulations. You win this battle!" },
	{ "loss", "Sorry. You lost this battle!" },
	{ "tie", "This is a tie game." },
	};
	string outcome;

	battles++;
	if (myCard == opCard) {
		outcome = msg["tie"]; ties++;
	}
	else if (myCard > opCard) {
		outcome = msg["win"]; wins++;
	}
	else outcome = msg["loss"];
	unsigned short losses = battles - wins - ties;

	cout << outcome << "\n\n" << fixed << setprecision(2)
		<< "Total battles:\t" << setw(6) << battles << "\n\n"
		<< "You Won:\t" << setw(6) << wins << "\t(" << setw(6) << ((float)wins / battles * 100) << "%)\n\n"
		<< "Opponent won:\t" << setw(6) << losses << "\t(" << setw(6) << ((float)losses / battles * 100) << "%)\n\n"
		<< "Tie:\t\t" << setw(6) << ties << "\t(" << setw(6) << ((float)ties / battles * 100) << "%)\n\n"
		<< "Play again? (y/n) ";
}

bool continueBattle() {
	string again;
	while (cin >> again && again[0] != 'y' && again[0] != 'n')
		cout << "\nInvalid input. Enter only 'y' or 'n' please!\nPlay again ? (y/n)\t";
	return again[0] == 'y';
}
