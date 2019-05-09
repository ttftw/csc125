/*=======================================================================================================
 PROGRAMMER(S):			Yang Wang: designed and implemented function main()
						Tyler Tracy \\tyler0: designed and implemented functions getData(), display(),
						                      minMax(), reverse(), and save();
 COURSE:				CSC 125
 MODIFIED BY:			Tyler Tracy
 LAST MODIFIED DATE:	05/03/2019
 DESCRIPTION:			This program uses a 1D array and functions to process numbers read from a text 
						file.

 FILES:					fin1D-func.cpp, hwProj.sln
 COMPILER:				MicroSoft Visual Studio 2017
 INSTRUCTION FOR COMPILATION AND EXECUTION:
	1.		Double click on hwProj.sln      to OPEN the project
	2.		Press Ctrl+F7					to COMPILE
	3.		Press Ctrl+F5					to EXECUTE
=======================================================================================================*/

#include<iostream>
using namespace std;
#include<string>
#include<fstream>

void getData(string&, int*, unsigned short&);
void display(int*, unsigned short);
void minMax(int*, unsigned short, int&, int&);
void reverse(int*, unsigned short);
void save(string, int*, unsigned short);

/*----------------------------------------------------------------------------
Function main() is given and you should NOT change anything in this function.
-----------------------------------------------------------------------------*/
int main()
{const unsigned short size = 2000;
 int                  numbers[size], min = 0, max = 0;
 unsigned short       count = 0;
 string               fileName = "";

 cout<<"\n\n**************************************************\n\n";

 // Step 1. Read integers from a file into array "numbers" and find the count
 getData(fileName, numbers, count);

 // Step 2. Check the status
 cout << "\n\nThere are total " << count << " number(s) read from the file. \n";
 if (count == 0)
 {cout << "No number to process, so the program is terminated.\n\n";
  exit(0);
 }

 // Step 3. Process data stored in the array
 // Task 3-1. 
 cout << "\n\nThe content of the file is: \n\n";
 display(numbers, count);

 // Task 3-2.
 minMax(numbers, count, min, max);
 cout << "\n\nmin = " << min << ", max = " << max << "\n\n";

// Task 3-3.
 reverse(numbers, count);
 cout << "\nThe reversed content of the file is: \n\n";
 display(numbers, count);

// Task 3-4.
 save("reversed_" + fileName, numbers, count);
 cout << "\nFile \"" << "reversed_" + fileName 
	  << "\" has been saved at the same location successfully. \n\n";

 // Step 4. Wrap up
 cout<<"\n\n**************************************************\n\n";
 return 0;
}

void getData(string &file, int *numbers, unsigned short &count)
{
	ifstream fin;
	string loc, path = "C:\\Temp\\";

	cout << "Enter a file located in " << path << "> ";
	cin >> file;

	fin.open(loc = path + file);
	if (!fin.is_open()) { cout << "Cannot read file: \"" + loc + "\"\n"; exit(0); }

	//read data from file into 1d array
	while (fin >> numbers[count]) count++;

	fin.close();
}

void display(int *numbers, unsigned short count)
{
	for (int i = 0; i < count; i++) cout << numbers[i] << ' ';
}

void minMax(int *numbers, unsigned short count, int &min, int &max)
{
	for (int i = 0; i < count; i++) {
		if (numbers[i] >= max) max = numbers[i];
		else if (numbers[i] <= min) min = numbers[i];
	}
}

void reverse(int *numbers, unsigned short count) 
{
	for (int i = 0; i < (count/2); i++) {
		int swap1 = numbers[i], swap2 = numbers[count - 1 - i];
		numbers[i] = swap2;
		numbers[count - 1 - i] = swap1;
	}
}

void save(string file, int *numbers, unsigned short count)
{
	ofstream fout;
	string loc, path = "C:\\Temp\\";

	fout.open(loc = path + file);
	if (!fout.is_open()) { cout << "Cannot read file: \"" + loc + "\"\n"; exit(0); }

	//write data from 1d array to file
	for (int i = 0; i < count; i++) fout << numbers[i] << ' ';
	
	fout.close();
}