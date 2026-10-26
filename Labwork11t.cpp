#include <iostream>
using namespace std;
int main()
{
	//Ayaan Waseem-L1F26BSCS0111
	int visitorAge;
	cout << "Enter visitor age: ";
	cin >> visitorAge;
	if (visitorAge < 0)
	{
		cout << "Invalid age.";
	}
	else if (visitorAge < 5)
	{
		cout << "Free entry.";
	}
	else if (visitorAge >= 5 && visitorAge  < 18)
	{
		cout << "Child/Student ticket: Rs. 200";

	}
	else if (visitorAge >= 18 && visitorAge  < 60)
	{
		cout << "Adult ticket: Rs. 500";
	}
	else
		cout << "Senior ticket: Rs. 300";
	return 0;
}