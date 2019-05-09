// Tyler Tracy \\trace\Tyler0

#include<iostream>
#include<Windows.h>
using namespace std;

void displayTitle(unsigned short t=0) {
	system("CLS");
	cout << "------------\n";
	cout << "Bicycle Race\n";
	cout << "------------\n";
	if (t) Sleep(t);
}

void displayPanel1(unsigned short t = 0) {
	system("CLS");
	cout << "------------\n";
	cout << "|    _o    |\n";
	cout << "|  _< \\_   |\n";
	cout << "| (_)>(_)  |\n";
	cout << "------------\n";
	if (t) Sleep(t);
}

void displayPanel2(unsigned short t = 0) {
	system("CLS");
	cout << "-----o------\n";
	cout << "|   /\\_    |\n";
	cout << "|  _>(_)   |\n";
	cout << "| (_)      |\n";
	cout << "------------\n";
	if (t) Sleep(t);
}
void displayPanel3(unsigned short t = 0) {
	system("CLS");
	cout << "-----_------\n";
	cout << "|  _ \\\\o   |\n";
	cout << "| (_)/<_   |\n";
	cout << "|     (_)  |\n";
	cout << "------------\n";
	if (t) Sleep(t);
}
void displayPanel4(unsigned short t = 0) {
	system("CLS");
	cout << "---_--------\n";
	cout << "| (_)\\__/o |\n";
	cout << "|   \\_| \\  |\n";
	cout << "|   (_)    |\n";
	cout << "------------\n";
	if (t) Sleep(t);
}
void displayPanel5(unsigned short t = 0) {
	system("CLS");
	cout << "----_-------\n";
	cout << "|  (_)     |\n";
	cout << "|  _|/'\\/  |\n";
	cout << "| (_)' _\\o_|\n";
	cout << "------------\n";
	if (t) Sleep(t);
}

int main()
{
	for (int i = 1; i <= 5; i++) {
		displayTitle(2000);
		displayPanel1(2000);
		displayPanel2(2000);
		displayPanel3(2000);
		displayPanel4(2000);
		displayPanel5(2000);
	}
}