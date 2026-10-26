#include <iostream>
using namespace std;
int main()
{
	//Ayaan Waseem-L1F26BSCS0111
	int billAmount;
	cout << "Enter bill amount: ";
	cin >> billAmount;
	cout << "Bill amount: " << billAmount << endl;

	if (billAmount >= 5000)
	{
		cout << "You qualify for discount.";
	}
	//Using >= is more suitable because using > will ignore 5000. According to given condition, bill amount at 5000 or above is eligible for discount. For this >= is suitable.
	return 0;
}