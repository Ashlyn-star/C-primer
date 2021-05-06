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
	for (int j = 0; j < iint.size()/2; ++j)
		cout << iint[j] + iint[iint.size()-j-1] << "  ";
	cout << endl;
}