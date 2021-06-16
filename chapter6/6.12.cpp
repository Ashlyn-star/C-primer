#include <iostream>

using std::cout;
using std::cin;
using std::endl;

void reset(int& p, int& q) {
	int n = p;
	p = q;
	q = n;
}

int main() {
	int a = 1, b = 2;
	reset(a, b);
	cout << a << b << endl;

}