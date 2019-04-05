//Tyler Tracy \\trace\Tyler0\

#include<iostream>
#include<string>
#include<fstream>
using namespace  std;

int main() {
	const string path = "c:\\temp\\";

	int int1, int2, int3;
	string file = "data1.txt", loc;

	ifstream fin; ofstream fout;

	//get file to sort from user
	cout << "Enter the file to be sorted in " << path << "\t";
	cin >> file;

	//Check if file exists
	fin.open(loc = path + file);
	if (!fin.is_open()) { cout << "Can not read file: \"" + loc + "\"\n\n"; exit(0); }

	//read data file
	fin >> int1 >> int2 >> int3;
	cout << "Found 3 integers: " << int1 << ", " << int2 << ", " << int3 << endl;

	//sort int1 < int2
	if (int1 > int2) {
		int x = int1;
		int1 = int2;
		int2 = x;
	}
	cout << "Sorted the first two integers in ascending order and kept the third the same: " << int1 << ", " << int2 << ", " << int3 << endl;

	//sort int1 < int2 < int3
	if (int2 > int3) {
		int x = int2;
		int2 = int3;
		int3 = x;
	}
	if (int1 > int2) {
		int x = int1;
		int1 = int2;
		int2 = x;
	}
	cout << "Sorted all integers in ascending order: " << int1 << ", " << int2 << ", " << int3 << endl;
	
	fout.open(loc = path + "sorted_" + file);
	if (!fout.is_open()) { cout << "Can not open file for writing: \"" + loc + "\"\n\n"; exit(0); }

	fout << int1 << " " << int2 << " " << " " << int3;

	//close files
	fin.close(); fout.close();
}