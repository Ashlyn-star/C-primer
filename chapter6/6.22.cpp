#include<iostream>

using std::cout;
using std::cin;
using std::endl;

void exchangp(int* p, int* q) {
	int* m = p;
	p = q;
	q = m;
}

int main() {
	int a = 1, b = 2;
	int* p = &a;
	int* q = &b;
	exchangp(p, q);
	cout << *p << "    " << *q << endl;

}