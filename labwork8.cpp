#include <iostream>
	using namespace std;
	int main() {
		//Ayaan Waseem-L1F26BSCS0111
		int marks;
		cout << "Enter marks: ";
		cin >> marks;
		if (marks >= 50) {   //>= should be used instead of =, = is used for assigning value
			cout << "Pass" << endl;
		}
		else {
			cout << "Fail" << endl;
		}
		return 0;

		//= is an assignment operator will assignments value to a variable. == is a relational operator used in conditions to see if two values are equal.
	}