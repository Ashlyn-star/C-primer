#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int absolute(int n) {
	n < 0 ? n = -n : n = n;
	return n;
}

int main() {
	cout << absolute(-13) << endl;
	return 0;
}