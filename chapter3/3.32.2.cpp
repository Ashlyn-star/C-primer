#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;


int main() {
	vector<int> iint(10);
	for (auto j = iint.begin(); j < iint.end();j++) {
		*j = (j - iint.begin());
	}
	vector<int> iint2(iint);
	for (auto& r : iint2) {
		cout << r << " ";
	}
}