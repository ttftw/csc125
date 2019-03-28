/*================================================================
 PROGRAMMER(S):			Tyler Tracy (Tyler0)
 COURSE:				CSC 125
 LAST MODIFIED DATE:	3/28/2019
 DESCRIPTION:			This program decodes a user-selected file
 
 FILES:					coder.cpp, (practiceProj.sln, ...)
 IDE/COMPILER:			MicroSoft Visual Studio 2017
 INSTRUCTION FOR COMPILATION AND EXECUTION:
	1.	Double click on practiceProj.sln to OPEN the project
	2.	Press Ctrl+F7					 to COMPILE
	3.	Press Ctrl+F5					 to EXECUTE
================================================================*/
#include<iostream>
#include<string>
#include<iomanip>
#include<fstream>
using namespace  std;

int main() {
	const string path = "c:\\temp\\";

	short needle;
	string file = "", loc = "", aLine ="";
	ifstream fin; ofstream fout;

	cout << "Enter the file to be decoded in " << path << "\t";
	cin >> file;

	//Check if file exists
	fin.open(loc = path + file);
	if (!fin.is_open()) { cout << "Can not read record: \"" + loc + "\"\n\n"; exit(0); }

	//Check if file contains word "Coded" and replaces it with "Decoded" and checks if available to write
	if ((needle = loc.find("Coded")) >= 0) loc.replace(needle, 5, "Decoded");
	fout.open(loc);
	if (!fout.is_open()) { cout << "Can not open record for writing: \"" + loc + "\"\n\n"; exit(0); }

	//loops over each line, decodes line, and writes to screen + decoded file.
	while (getline(fin, aLine)) {
		if ((needle = aLine.find("XYZ")) >= 0) aLine.replace(needle, 3, "av");
		else if ((needle = aLine.find("kytr butkr")) >= 0) aLine.replace(needle, 10, "Missouri State University");;
		cout << aLine << endl;
		fout << aLine << endl;
	}

	//close files
	fin.close(); fout.close();
}