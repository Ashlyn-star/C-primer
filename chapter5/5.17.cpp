#include <iostream>
#include <string>
#include <vector>

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;

int main() {
	vector<int> a = { 0,1,1,2 };
	vector<int> b = { 0,1,1,2,3,5,8 };
	decltype(a.size()) n =std:: min(a.size(), b.size());
	bool flag = 1;
	for (decltype(a.size()) i = 0; i < n; ++i) {
		if (a[i] != b[i]) {
			flag = 0; break;
		}
	}
	cout << flag << endl;
}