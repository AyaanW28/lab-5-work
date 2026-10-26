#include <iostream>
using namespace std;
int main()
{
	//Ayaan Waseem-L1F26BSCS0111
	int marks;
	cout << "Enter marks: (0-100)";
	cin >> marks;
	if (marks >= 90)
	{
		cout << "A";

	}
	else if (marks >= 80)
		cout << "B";
	else if (marks >= 70)
		cout << "C";
	else if (marks >= 60)
		cout << "D";
	else
		cout << "F";

	//We start with highest because if we start with lowest, c++ will print it and ignore the rest. If we start with lowest condition and i input 90, it will not print A, instead the lowest grade.
	return 0;
}