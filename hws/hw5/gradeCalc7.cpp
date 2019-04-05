/*========================================================================
COURSE:	CSC125, Homwork#5
PROGRAMMER:	Tyler Tracy (Tyler0)
LAST MODIFIED DATE:	4/1/2019
DESCRIPTION:	This program calculates student Quality Points from a file
FILES:	gradeCalc7.cpp
IDE/COMPILER:	MicroSoft Visual Studio 2017

INSTRUCTION FOR COMPILATION AND EXECUTION:
1. Double click on hwProj.sln to OPEN the project
2. Press Ctrl+F7	to COMPILE
3. Press Ctrl+F5	to EXECUTE
========================================================================*/

#include<fstream>
#include<iomanip>
#include<iostream>
#include<string>
using namespace std;

int main() {
	const string path = "C:\\Temp\\";

	unsigned short age;
	unsigned preHours, prePoints, newHours, newPoints, totalHours, totalPoints;
	float preGPA, newGPA, totalGPA;
	string fName, lName, fullName, sex, SSN;
	string file = "info1.txt", loc = "", label = "";

	ifstream fin; ofstream fout;

	cout << "Enter the name of a record located in \"" + path + "\" (info1.txt):\t";
	cin >> file;

	//attempt to read file
	fin.open(loc = path + file);
	if (!fin.is_open()) { cout << "Can not read record: \"" + loc + "\"\nExiting...\n"; exit(0); }
	
	//import data from file
	fin >> 
		label >> fName >> lName >> 
		label >> age >> label >> SSN >> label >> sex >> 
		label >> label >> preHours >> label >> label >> label >> prePoints >>
		label >> label >> newHours >> label >> label >> label >> newPoints;
	fin.close();

	//calculate GPAs
	fullName = fName + " " + lName;
	preGPA = (float)prePoints / preHours;
	newGPA = (float)newPoints / newHours;
	totalHours = preHours + newHours;
	totalPoints = prePoints + newPoints;
	totalGPA = (float)totalPoints / totalHours;

	//output data to console
	cout << "Name:\t" << fullName << endl;
	cout << "Age:\t" << age << endl;
	cout << "SSN:\t" << SSN << endl;
	cout << "Sex:\t" << sex << endl << endl;
	
	cout << "Transfer hours:" << setw(6) << preHours << "\t";
	cout << "Transfer quality points:" << setw(6) << prePoints << endl;
	cout << "MSU hours:" << setw(11) << newHours << "\t";
	cout << "MSU quality points:" << setw(11) << newPoints << endl << endl;
	
	cout << setw(22) << setfill('-') << "" << endl;
	cout << "Transfer GPA:\t" << setw(6) << setfill(' ') << fixed << setprecision(2) << preGPA << endl;
	cout << "MSU GPA:\t" << setw(6) << newGPA << endl;
	cout << "Overall GPA:\t" << setw(6) << totalGPA << endl;

	//attempt to open file for writing and output data to file
	fout.open(loc = path + "record_of_" + file);
	if (!fout.is_open()) { cout << "Can not read record: \"" + loc + "\"\n\n"; exit(0); }
	
	fout << "Name:\t" << fullName << endl;
	fout << "Age:\t" << age << endl;
	fout << "SSN:\t" << SSN << endl;
	fout << "Sex:\t" << sex << endl << endl;

	fout << "Transfer hours:" << setw(6) << preHours << "\t";
	fout << "Transfer quality points:" << setw(6) << prePoints << endl;
	fout << "MSU hours:" << setw(11) << newHours << "\t";
	fout << "MSU quality points:" << setw(11) << newPoints << endl << endl;

	fout << setw(22) << setfill('-') << "" << endl;
	fout << "Transfer GPA:\t" << setw(6) << setfill(' ') << fixed << setprecision(2) << preGPA << endl;
	fout << "MSU GPA:\t" << setw(6) << newGPA << endl;
	fout << "Overall GPA:\t" << setw(6) << totalGPA << endl;

	fout.close();
}