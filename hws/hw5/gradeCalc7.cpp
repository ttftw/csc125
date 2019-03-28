/*==============================================================
COURSE:	CSC125, Homwork#5
PROGRAMMER:	Tyler Tracy (Tyler0)
LAST MODIFIED DATE:	3/27/2019
DESCRIPTION:	This program calculates student Quality Points
FILES:	gradeCalc7.cpp
IDE/COMPILER:	MicroSoft Visual Studio 2017

INSTRUCTION FOR COMPILATION AND EXECUTION:
1. Double click on hwProj.sln to OPEN the project
2. Press Ctrl+F7	to COMPILE
3. Press Ctrl+F5	to EXECUTE
===============================================================*/

#include<iostream>
#include<iomanip>
#include<string>
#include <fstream>
using namespace std;

int main() {
	const string path = "c:\\temp\\";

	unsigned short age;
	unsigned preHours, prePoints, newHours, newPoints, totalHours, totalPoints;
	float preGPA, newGPA, totalGPA;
	string fName, lName, fullName, sex, SSN;
	string file = "info1.txt"; string loc = ""; string aLine = "";

	ifstream fin; ofstream fout;

	fin.open(loc = path + file);
	if (!fin.is_open()) { cout << "Can not read record: \"" + loc + "\"\n\n"; exit(0); }
	if (!fout.is_open()) cout << "Can not write record: \"" + loc + "\"\n\n";

	while (getline(fin, aLine)) {
		string del = ""; string buf = "";
		//cout << endl << aLine;
		//fout << aLine << endl;

		stringstream aLine;
		aLine >> fName >> lName;
		//fullName = fName + " " + lName;

		//cout << "Enter " << fName << "'s Age and Sex (ex: 21 M)\t";
		//cin >> age >> sex;
		//cout << "Enter " << fName << "'s SSN (ex: 123-45-6789)\t";
		//cin >> SSN; 

		//// Prevous college data
		//cout << "Enter total TRANSFER hours followed by total TRANSFER quality points (ex: 17 68)\t";
		//cin >> preHours >> prePoints;
		//preGPA = (float) prePoints / preHours;

		//// MSU data
		//cout << "Enter total MSU hours followed by total MSU quality points (ex: 17 68)\t";
		//cin >> newHours >> newPoints;
		//newGPA = (float) newPoints / newHours;

		//// Total hours, points, and GPA
		//totalHours = preHours + newHours;
		//totalPoints = prePoints + newPoints;
		//totalGPA = (float) totalPoints / totalHours;
	}

	fin.close(); fout.close();


	//cout << "Student Record Creator" << endl << endl;
	//cout << "Enter the student name (ex: James Smith)\t";
	//cin >> fName >> lName;
	//fullName = fName + " " + lName;

	//cout << "Enter " << fName << "'s Age and Sex (ex: 21 M)\t";
	//cin >> age >> sex;
	//cout << "Enter " << fName << "'s SSN (ex: 123-45-6789)\t";
	//cin >> SSN; 

	//// Prevous college data
	//cout << "Enter total TRANSFER hours followed by total TRANSFER quality points (ex: 17 68)\t";
	//cin >> preHours >> prePoints;
	//preGPA = (float) prePoints / preHours;

	//// MSU data
	//cout << "Enter total MSU hours followed by total MSU quality points (ex: 17 68)\t";
	//cin >> newHours >> newPoints;
	//newGPA = (float) newPoints / newHours;

	//// Total hours, points, and GPA
	//totalHours = preHours + newHours;
	//totalPoints = prePoints + newPoints;
	//totalGPA = (float) totalPoints / totalHours;

	//cout << "Name:\t" << fullName << endl;
	//cout << "Age:\t" << age << endl;
	//cout << "SSN:\t" << SSN << endl;
	//cout << "Sex:\t" << sex << endl << endl;
	//
	//cout << "Transfer hours:" << setw(6) << preHours << "\t";
	//cout << "Transfer quality points:" << setw(6) << prePoints << endl;
	//cout << "MSU hours:" << setw(11) << newHours << "\t";
	//cout << "MSU quality points:" << setw(11) << newPoints << endl << endl;
	//
	//cout << setw(22) << setfill('-') << "" << endl;
	//cout << "Transfer GPA:\t" << setw(6) << setfill(' ') << fixed << setprecision(2) << preGPA << endl;
	//cout << "MSU GPA:\t" << setw(6) << newGPA << endl;
	//cout << "Overall GPA:\t" << setw(6) << totalGPA << endl;

	//fs << "Name:\t" << fullName << endl;
	//fs << "Age:\t" << age << endl;
	//fs << "SSN:\t" << SSN << endl;
	//fs << "Sex:\t" << sex << endl << endl;

	//fs << "Transfer hours:" << setw(6) << preHours << "\t";
	//fs << "Transfer quality points:" << setw(6) << prePoints << endl;
	//fs << "MSU hours:" << setw(11) << newHours << "\t";
	//fs << "MSU quality points:" << setw(11) << newPoints << endl << endl;

	//fs << setw(22) << setfill('-') << "" << endl;
	//fs << "Transfer GPA:\t" << setw(6) << setfill(' ') << fixed << setprecision(2) << preGPA << endl;
	//fs << "MSU GPA:\t" << setw(6) << newGPA << endl;
	//fs << "Overall GPA:\t" << setw(6) << totalGPA << endl;

	//fs.close();
}