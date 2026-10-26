#include <iostream>
using namespace std;
int main()
{
	//Ayaan Waseem-L1F26BSCS0111
	int firstNumber, secondNumber;
	cout << "Enter two numbers: ";
	cin >> firstNumber >> secondNumber;
	if (firstNumber > secondNumber)
		cout << "First number is greater than second number";
	else
		cout << "First number is not greater than second number";
		return 0;
		//It will print not greater. Being equal does not mean its greater, here we only check if it is greater or not. 
}