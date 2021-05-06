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
	for (auto j=iint.begin(); j!=iint.end(); ++j)
		cout << *j + *(j+1)<<"  ";
	cout << endl;
}