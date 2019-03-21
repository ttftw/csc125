/*==============================================================
COURSE:	CSC125, Practice#11
PROGRAMMER:	Tyler Tracy (Tyler0)
LAST MODIFIED DATE:	3/6/2019
DESCRIPTION:	This program checks if input is within a range
FILES:	logic.cpp
IDE/COMPILER:	MicroSoft Visual Studio 2017

INSTRUCTION FOR COMPILATION AND EXECUTION:
1. Double click on practiceProj.sln to OPEN the project
2. Press Ctrl+F7	to COMPILE
3. Press Ctrl+F5	to EXECUTE
===============================================================*/

#include<iostream>
using namespace std;

int main() {
	int min, max, x;
	cout << "Enter two numbers:\t";
	cin >> min >> max;
	cout << "Enter a number within the range of "
		<< min << "-" << max << "\t";
	cin >> x;
	cout << "Is " << x << " within the range of " << min << "-" << max << "?\t"
		<< ((x >= min) && (x <= max) ? "True" : "False") << endl;
}