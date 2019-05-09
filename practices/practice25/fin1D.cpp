/*=======================================================================================================
 PROGRAMMER(S):			Yang Wang
						Tyler Tracy \\tyler0
 COURSE:				CSC 125
 MODIFIED BY:			Tyler Tracy
 LAST MODIFIED DATE:	4/25/2019
 DESCRIPTION:			This program reads numbers from a text file containing no more than 2000 integers
                          and stores them in a 1D array, then process the numbers from the array.

 FILES:					fin1D.cpp, practiceProj.sln
 COMPILER:				MicroSoft Visual Studio 2017
 INSTRUCTION FOR COMPILATION AND EXECUTION:
	1.		Double click on myCPPproj.sln	to OPEN the project
	2.		Press Ctrl+F7					to COMPILE
	3.		Press Ctrl+F5					to EXECUTE
=======================================================================================================*/
#include <iostream>
using namespace std;
#include <fstream>
#include <string>
#include <iomanip>

void main()
{ifstream fin;
 string	  fileLocation = "C:\\Temp\\",
		  fileName;
 int package[2000];
 unsigned short count = 0;

 cout<<"\n\n**************************************************\n\n";

 //===============================================================
 // Part I. Read numbers from a file and store them in a 1D array
 //===============================================================

		// Step I-1. Open a file for input and validation
 cout << "Assume that the file is stored at the location: \n\n\t" << fileLocation << endl;
 cout << "\nEnter the file name with its extension (e.g., xxx.txt): ";
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
 
		// Step I-2. Read numbers from the file and store them in a 1D array
 {int		     aNumber;
  cout << "\n\nThe file's contents are: \n\n";

  while (fin >> aNumber)
  {cout << setw(6) << aNumber;
   package[count] = aNumber;
   count++;
  }
  
  cout << "\n\nThere are total " << count << " number(s). \n";
 }

		// Step I-3. Finish up
 fin.close();

 //===============================================================
 // Part II. Process the read numbers stored in the array
 //===============================================================

	// Task II-1. Display the numbers read from the file.

 cout << "\n\n";
 for (int i = 0; ((i < count) && (package[i])); i++) cout << package[i] << " ";

	// Task II-2. Find and Display the sum of the numbers read from the file.
 int sum = 0;
 for (int i = 0; i < count; i++) sum += package[i];
 cout << "\n\nThe sum of these data: " << sum;

	// Task II-3. Find and Display the count of the positive numbers read from the file.
 int pos = 0;
 for (int i = 0; i < count; i++) {
	 if (package[i] > 0) {
		 pos = pos + 1;
	 }
 }
 cout << "\n\nThere are " << pos << " positive numbers.";
 
 cout<<"\n\n**************************************************\n\n";

 char taco[] = "hello world";

 taco[0]
}
