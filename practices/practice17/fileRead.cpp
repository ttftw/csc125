/*
 PROGRAMMER(S):			Yang Wang
						Tyler Tracy Tyler0
	COURSE:				CSC 125
*/

#include <iostream>
using namespace std;
#include <fstream>
#include <string>
#include <iomanip>

void main()
{ifstream fin;
 string	  fileLocation = "C:\\Temp\\",
		  fileName;

 cout<<"\n\n**************************************************\n\n";

 // 1. Open a file for input and validation
 cout << "Assume that the file is stored at the location: \n\n\t" << fileLocation << endl;
 cout << "\nEnter the file name with its extension: ";
 cin  >> fileName;

 fin.open(fileLocation + fileName);
 if (! fin.is_open())
 {cout << "\n--------------------------------------------------\n"
	   << "\n*** Error: file \"" << fileName << "\" fails to open for input. ***\n\n"
	   << " 1. Does the file exist in the folder:\n\n\t" << fileLocation << " ?\n\n"
	   << " 2. Do you have a read premission for that file?\n\n"
	   << " 3. Otherwise, check your spelling carefully, and try again.\n\n"
	   << "**************************************************\n\n";
  exit(0);
 }
 
 // 2. Read and process data from the file 
 {int		     aNumber;
  unsigned short count = 0;

  cout << "\n\nThe file's contents are: \n\n";

  while (fin >> aNumber) {
	  count++;
	  cout << aNumber << " ";
 }

  cout << "\n\nThere are total " << count << " number(s). \n";
 }

 // 3. Finish up
 fin.close();

 cout<<"\n\n**************************************************\n\n";
}
