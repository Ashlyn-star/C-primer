#include <iostream>

using std::cout;
using std::cin;
using std::endl;

void reset(int* p, int* q) {
	int n = *p;
	*p = *q;
	*q = n;
}

int main() {
	int a = 1, b = 2;
	int* m = &a;
	int* m1 = &b;
	reset(m, m1);
	cout << a << b << endl;

}