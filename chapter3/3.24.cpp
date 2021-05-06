#include <iostream>
#include <vector>
#include <string>
using std::vector;
using std::string;
using std::cin;
using std::cout;
using std::endl;

int main() {
	int i;
	vector<int> iint;
	while (cin >> i) {
		iint.push_back(i);
	}
	for (auto j = iint.begin(); j != iint.end()-1; ++j)
		cout << *j + *(j + 1) << "  ";
	/*1 2 3 4 5 6 7 8
     ^Z
     3  5  7  9  11  13  15  2097269*/
	cout << endl;
}