/*==============================================================
COURSE:	CSC125, Practice#6
PROGRAMMER:	Tyler Tracy (Tyler0)
LAST MODIFIED DATE:	2/13/2019
DESCRIPTION:	This program calculates student Quality Points
FILES:	gradeCalc3.cpp
IDE/COMPILER:	MicroSoft Visual Studio 2017

INSTRUCTION FOR COMPILATION AND EXECUTION:
1. Double click on practiceProj.sln to OPEN the project
2. Press Ctrl+F7	to COMPILE
3. Press Ctrl+F5	to EXECUTE
===============================================================*/

#include<iostream>
using namespace std;

int main()
{
	int studentHoursAttempted, studentGradePoints, studentQualityPoints;

	cout << "Enter 'Hours Attempted': ";
	cin >> studentHoursAttempted;

	cout << "Enter 'Grade Points': ";
	cin >> studentGradePoints;

	studentQualityPoints = studentHoursAttempted * studentGradePoints;

	cout << endl << "                        Student 'Hours Attempted'  :  " << studentHoursAttempted << endl;
	cout << "                           Student 'Grade Points'  :  " << studentGradePoints << endl;
	cout << "'Quality Points' (Hours Attempted x Grade Points)  :  " << studentQualityPoints << endl << endl;
}