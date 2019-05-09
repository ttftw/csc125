/*=
 PROGRAMMER(S):	Yang Wang 
				Tyler Tracy (Tyler0) 
=*/

#include<iostream>
using namespace std;

//**********************************************************************************
// Add here a definition for function "validation"

bool validation(float f) {
	return f != 0;
}


//**********************************************************************************
// Add here a definition for function "division"

void division(float num, float denom, float &result) {
	result = num / denom;
}

void increase(int i, int &k) {

}

//**********************************************************************************
void main()
{float numerator = 0, denominator = 0, result = 0;
 bool  validInput = false;

 cout << "\nThis program will do division.\n\n";

 // Step 1. Enter data value(s)
 cout<<"Please enter a numerator and a denominator: ";
 cin >> numerator >> denominator;

 // Step 2. Validate entered data items
 validInput = validation(denominator);


 if (! validInput)
 {cout << "\n=============================================\n"
	    << " Error: entered denominator = 0\n"
		<< "=============================================\n\n";
  exit(0);
 }

 // Step 3. Compute and output
 division(numerator, denominator, result);

 cout << "\n\t" << numerator << " / " << denominator << " = " << result << endl;

 // Step 3. Other operation(s) if there are any
 cout<<"\nDone.\n\n";
}
