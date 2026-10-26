#include <iostream>
using namespace std;
int main()
{
	//Ayaan Waseem-L1F26BSCS0111
	int units;
	cout << "Enter monthly units: ";
	cin >> units;
	if (units <= 100)
	{
		cout << "Usuage Category: Low";
	}
	else if (units <= 300)
	{
		cout << "Usuage Category: Medium";
	}
	else
		cout << "Usuage Category: High";
	return 0;
}