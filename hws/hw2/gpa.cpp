/*==============================================================
			COURSE:	CSC125, Homework#2
		PROGRAMMER:	Tyler Tracy (Tyler0)
LAST MODIFIED DATE:	2/6/2019
       DESCRIPTION:	This program calculates GPA
			 FILES:	gpa.cpp
	  IDE/COMPILER:	MicroSoft Visual Studio 2017

	  INSTRUCTION FOR COMPILATION AND EXECUTION:
		1. Double click on hwProj.sln to OPEN the project
		2. Press Ctrl+F7	to COMPILE
		3. Press Ctrl+F5	to EXECUTE
===============================================================*/

#include<iostream>
using namespace std;

int main()
{
	unsigned short preHours, newHours, totalHours;
	float prePoints, preGPA, newPoints, newGPA, totalPoints, totalGPA;

	// Prevous college data
	preHours = 52;
	prePoints = 182.0;
	preGPA = prePoints / preHours;

	// MSU data
	newHours = 25;
	newPoints = 93.0;
	newGPA = newPoints / newHours;

	// Total hours, points, and GPA
	totalHours = preHours + newHours;
	totalPoints = prePoints + newPoints;
	totalGPA = totalPoints / totalHours;

	cout << "Transfer data--\n";
	cout << "       Hours : " << preHours << "  Quality Points : " << prePoints << "  GPA : " << preGPA << endl;
	cout << "MSU data--\n";
	cout << "       Hours : " << newHours << "  Quality Points :  " << newPoints << "  GPA : " << newGPA << endl;
	cout << "\nTotal--\n";
	cout << "       Hours : " << totalHours << "  Quality Points : " << totalPoints << "  GPA : " << totalGPA << endl << endl;
}