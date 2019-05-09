/*==============================================================
COURSE:	CSC125, Homework#1b
PROGRAMMER:	Tyler Tracy (Tyler0)
LAST MODIFIED DATE:	2/21/2019
DESCRIPTION:	This program calculates triangle sides
FILES:	trig.cpp
IDE/COMPILER:	MicroSoft Visual Studio 2017

INSTRUCTION FOR COMPILATION AND EXECUTION:
1. Double click on hwProj.sln to OPEN the project
2. Press Ctrl+F7	to COMPILE
3. Press Ctrl+F5	to EXECUTE
===============================================================*/

#include<iostream>
using namespace std;

#include<string>

int main()
{
	float hyp, op;
	double adj, theta;

	cout << "Enter the known angle (in degrees) and the side length opposite this angle (ex: 20 12):\t";
	cin >> theta >> op;
	theta = theta * 3.14159 / 180;

	adj = op * pow(tan(theta),-1);
	hyp = sqrt(pow(adj, 2) + pow(op, 2));

	cout << "Adjacent edge:\t" << adj << "\nHypotenuse:\t" << hyp << endl;
}