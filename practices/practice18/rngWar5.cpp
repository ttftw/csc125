//Tyler Tracy (Tyler0)

#include<ctime>
#include<iostream>
#include<iomanip>
#include<map>
#include<string>
using namespace std;

int main() {
	const char dcTL = 201, dcTR = 187, dcBL = 200, dcBR = 188, dcHL = 205, dcVL = 186;
	const char cTL = 218, cTR = 191, cBL = 192, cBR = 217, cVL = 179, cHL = 196;
	const string deck[] = { "2", "3", "4", "5", "6", "7", "8", "9", "10", "J", "Q", "K", "A" };

	map<string, string> msg{
		{ "win", "Congratulations. You win this battle!"},
		{ "loss", "Sorry. You lost this battle!" },
		{ "tie", "This is a tie game."},
	};
	string again, outcome;
	srand(time(NULL));

newGame:
	system("CLS");
	cout << "    " << dcTL << string(20, dcHL) << dcTR << endl;
	cout << "    " << dcVL << "The card game: \"WAR\"" << dcVL << endl;
	cout << "    " << dcBL << string(20, dcHL) << dcBR << endl;

	do {
		int myCard = (rand() % 13), opCard = (rand() % 13);
		char mySuit = 3 + (rand() % 4), opSuit = 3 + (rand() % 4);

		// This is to make sure we pick a unique card.
		if ((myCard == opCard) && (mySuit == opSuit)) {
			if (mySuit == 6) mySuit--;
			else mySuit++;
		}

		if (myCard == opCard) outcome = msg["tie"];
		else outcome = (myCard > opCard) ? msg["win"] : msg["loss"];

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

		cout << outcome << endl << endl << flush;
		system("PAUSE");
	} while (outcome != msg["win"]);

	cout << "Play again? (y/n)\t";
	cin >> again;

	if (again[0] == 'y') goto newGame;
	cout << "Exiting..."; exit(1);
}