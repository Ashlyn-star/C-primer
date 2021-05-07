#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::vector;

int main() {
	vector<int> iint = { 1,2,3 };
	for (auto& r : iint) {
		r % 2 ? r *= 2 : r = r;
		cout << r << "  ";

	}

}