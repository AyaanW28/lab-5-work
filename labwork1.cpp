#include <iostream>
using namespace std;
int main()
{
	//Ayaan Waseem-L1F26BSCS0111
	int num;
	cout << "Enter an integer: ";
	cin >> num;
	if (num > 0)
		cout << "Positive";
	return 0;
	//When i use 0 or -4, it doesn't print because the condition only prints greater than 0. If input is 0 or less, it will skip the cout line.
}