/*==============================================================
COURSE:	CSC125, Practice#7
PROGRAMMER:	Tyler Tracy (Tyler0)
LAST MODIFIED DATE:	2/21/2019
DESCRIPTION:	This program calculates student Quality Points
FILES:	gradeCalc4.cpp
IDE/COMPILER:	MicroSoft Visual Studio 2017

INSTRUCTION FOR COMPILATION AND EXECUTION:
1. Double click on practiceProj.sln to OPEN the project
2. Press Ctrl+F7	to COMPILE
3. Press Ctrl+F5	to EXECUTE
===============================================================*/

#include<iostream>
using namespace std;

#include<string>

int main()
{
	unsigned short age;
	unsigned int preHours, prePoints, newHours, newPoints, totalHours, totalPoints;
	float preGPA, newGPA, totalGPA;
	string fName, lName, fullName, sex, SSN;

	cout << "Student Record Creator" << endl << endl;
	cout << "Enter the student name (ex: James Smith)\t";
	cin >> fName >> lName;
	fullName = fName + " " + lName;

	cout << "Enter " << fName << "'s Age and Sex (ex: 21 M)\t";
	cin >> age >> sex;
	cout << "Enter " << fName << "'s SSN (ex: 123-45-6789)\t";
	cin >> SSN;

	// Prevous college data
	cout << "Enter total TRANSFER hours followed by total TRANSFER quality points (ex: 17 68)\t";
	cin >> preHours >> prePoints;
	preGPA = (float) prePoints / preHours;

	// MSU data
	cout << "Enter total MSU hours followed by total MSU quality points (ex: 17 68)\t";
	cin >> newHours >> newPoints;
	newGPA = (float) newPoints / newHours;

	// Total hours, points, and GPA
	totalHours = preHours + newHours;
	totalPoints = prePoints + newPoints;
	totalGPA = (float) totalPoints / totalHours;

	cout << "\nGenerated Student record for: " << fName << " " << lName << "--" << endl << endl;
	cout << "SSN: " << SSN << "\t Age: " << age << "\t Sex: " << sex << endl << endl;

	cout << "Transfer data--\n";
	cout << "       Hours : " << preHours << "  Quality Points : " << prePoints << "  GPA : " << preGPA << endl;
	cout << "MSU data--\n";
	cout << "       Hours : " << newHours << "  Quality Points :  " << newPoints << "  GPA : " << newGPA << endl;
	cout << "\nTotal--\n";
	cout << "       Hours : " << totalHours << "  Quality Points : " << totalPoints << "  GPA : " << totalGPA << endl << endl;
}