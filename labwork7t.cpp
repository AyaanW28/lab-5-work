#include <iostream>
using namespace std;
int main()
{
	//Ayaan Waseem-L1F26BSCS0111
	int temp;
	cout << "Enter temperature in Celsius: ";
	cin >> temp;
	if (temp < 10)
		cout << "Weather: Cold";
	else if (temp < 25)
		cout << "Weather: Pleasant";
	else if (temp < 35)
		cout << "Weather: Warm";
	else
		cout << "Weather: Hot";
	//Second if else condition becomes true (<25) before (<35). It will ignore (<35) because compiler ignores other conditions the moment it finds a true condition in if else if

	return 0;
}