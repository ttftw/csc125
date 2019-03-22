/*===================================================================================
 PROGRAMMER(S):			Yang Wang
						Tyler Tracy (Tyler0)
 COURSE:				CSC 125
 MODIFIED BY:			Tyler Tracy
 LAST MODIFIED DATE:	3/22/2019
 DESCRIPTION:			This program asks a user to enter the name of a file stored 
                        in folder C:\Temp and makes a copy of it at the same location.
 
 FILES:					copy.cpp, (practiceProj.sln, ...)
 IDE/COMPILER:			MicroSoft Visual Studio 2017
 INSTRUCTION FOR COMPILATION AND EXECUTION:
	1.	Double click on practiceProj.sln to OPEN the project
	2.	Press Ctrl+F7					 to COMPILE
	3.	Press Ctrl+F5					 to EXECUTE
===================================================================================*/
#include<iostream>
using namespace  std;
#include<string>
#include<iomanip>
#include<fstream>                     // Needed for file operations

int main() {
	ifstream fin;                       // Create a file object for input
	ofstream fout;                      // Create a file object for output
	string   fileLocation  = "C:\\temp\\", inputFileName = "", outputFileName = "";
	 
	 cout << "\n********************************************************************\n\n";
	
	 // Step 1. Try to open a file for input
	 cout << "Assumed file location is at:   " << fileLocation
		  << "\n\nPlease enter the file name with its extension (ex. XXX.txt): ";
	 cin  >> inputFileName;
	 
	 fin.open(fileLocation + inputFileName);
	
	 if (! fin.is_open()) {
		 cout << " Error: file \"" << inputFileName << "\" fails to open for input.\n\n"
		   << " 1. Does the file exist in the folder:\n\t" << fileLocation << " ?\n"
		   << " 2. Do you have a read premission for that file?\n"
		   << " 3. Otherwise, check your spelling carefully, and try again."
		   << "\n\n********************************************************************\n\n";
	  exit(0);
	 }
	 
	 // Step 2. Try to open a file for output
	 outputFileName = "copy_of_" + inputFileName;
	 
	 fout.open(fileLocation + outputFileName);
	
	 if (! fout.is_open()) {
		 cout << "Error: file fails to open for output\n\n"
		   << " 1. Does the folder exist on the computer?\n"
		   << " 2. Do you have a write premission to the folder?\n\n"
		   << "******************************************************************\n\n";
	  fin.close();
	  exit(0);
	 }
	 
	 // Step 3. Read data items from the input file, display them on screen, and write them to the output file 
	 cout << endl;
	 for (short i = 1; i <= 3; i++) {
		 string aLine;

		 getline(fin, aLine);
		 cout << aLine;
		 fout << aLine << endl;
	 }
	 cout << endl;

	 // Step 4. Close the file
	 fin.close();
	 fout.close();
	
	 // Step 5. Other operations if there are any
	 cout << "\nFile \"" << outputFileName << "\" has been saved successfully at location " << fileLocation
		  << "\n\n********************************************************************\n\n";
}