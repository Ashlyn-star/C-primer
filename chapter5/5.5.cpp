#include <iostream>
#include <vector>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;

int main() {
	const vector<string> scores{ "F","D" ,"C" ,"B" ,"A" ,"A++" };
	string lettergrade;
	int grade;
	cin >> grade;
	if (grade < 60)
		lettergrade = scores[0];
	else {
		if(grade==100)
			lettergrade = scores[5];
		else {
			lettergrade = scores[(grade - 50) / 10];
			if (grade % 10 < 3)
				lettergrade = lettergrade + "-";
			if (grade % 10>7)
				lettergrade = lettergrade + "+";

		}
		
	}
	cout << lettergrade << endl;
	return 0;
}