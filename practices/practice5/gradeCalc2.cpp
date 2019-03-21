/*==============================================================
COURSE:	CSC125, Practice#5
PROGRAMMER:	Tyler Tracy (Tyler0)
LAST MODIFIED DATE:	2/8/2019
DESCRIPTION:	This program calculates student Quality Points
FILES:	gradeCalc2.cpp
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
	unsigned int studentHoursAttempted, studentGradePoints, studentQualityPoints, age;
	string fName, lName, sex, SSN;

	fName = "Peter";
	lName = "Ford";
	age = 21;
	sex = "M";
	SSN = "789-34-1256";

	studentHoursAttempted = 17;
	studentGradePoints = 4;

	studentQualityPoints = studentHoursAttempted * studentGradePoints;

	cout << "Student record for: " << fName << " " << lName << "--" << endl << endl;
	cout << "SSN: " << SSN << "\t Age: " << age << "\t Sex: " << sex << endl << endl;
	cout << "                                'Hours Attempted'  :  " << studentHoursAttempted << endl;
	cout << "                           Student 'Grade Points'  :  " << studentGradePoints << endl;
	cout << "'Quality Points' (Hours Attempted x Grade Points)  :  " << studentQualityPoints << endl << endl;
}