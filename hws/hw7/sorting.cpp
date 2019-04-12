//Tyler Tracy \\trace\Tyler0\

#include<algorithm>
#include<fstream>
#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main() {
	const string path = "c:\\temp\\";

	float temp, max = 0, min = 0;
	ifstream fin;
	string file = "data2.txt", loc;
	vector<float> data;

	//get file to sort from user
	cout << "\nEnter the file to be sorted located in " << path << "\t"; 
	cin >> file;

	fin.open(loc = path + file);
	if (!fin.is_open()) { cout << "Cannot read file: \"" + loc + "\"\n"; exit(0); }

	//read data from file into vector
	while (fin >> temp) data.push_back(temp);
	cout << "\nThis file contains " << data.size() << " numbers\n";
	
	if (!data.size()) exit(0);
	cout << "Unsorted\t->\t"; for (float f : data) cout << f << " ";
	
	sort(data.begin(), data.end());
	cout << "\nSorted\t\t->\t"; for (float f : data) cout << f << " ";
	cout << "\n(Min, Max)\t->\t(" << data[0] << ", " << data[data.size() - 1] << ")\n";
	fin.close();
}