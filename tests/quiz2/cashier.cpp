/*==============================================================
COURSE:	CSC125, Quiz#2
PROGRAMMER:	Tyler Tracy (Tyler0)
LAST MODIFIED DATE:	2/14/2019
DESCRIPTION:	This program calculates calculates shopping cost
FILES:	cashier.cpp
IDE/COMPILER:	MicroSoft Visual Studio 2017

INSTRUCTION FOR COMPILATION AND EXECUTION:
1. Double click on testProject.sln to OPEN the project
2. Press Ctrl+F7	to COMPILE
3. Press Ctrl+F5	to EXECUTE
===============================================================*/

#include<iostream>;
#include<string>;
using namespace std;

int main() {
	string date = "01/29/2019", 
		isbn = "0-13-403732-5",
		title = "How to program in C++";
	float taxRate = .069, 
		price = 129.59,
		subtotal, tax, total;
	short quanity = 3;
	char bar = 196;

	subtotal = price * quanity;
	tax = subtotal * taxRate;
	total = subtotal + tax;

	cout << "Serendipity Booksellers" << endl << endl;
	cout << "Date: " << date << endl << endl;
	cout << "Quanity\tISBN\t\tTitle\t\t\tPrice" << endl;
	cout << string(60, bar) << endl;
	cout << quanity << "\t" << isbn << "\t" << title << "\t$" << price << endl;
	cout << "" << endl;
	cout << "\t\t\t\tSubtotal:\t$" << subtotal << endl;
	cout << "\t\t\t\tTax:\t\t$" << tax << endl;
	cout << "\t\t\t\tTotal:\t\t$" << total << endl;
	cout << endl << "Thank You for Shopping at Serendipity!" << endl;
}