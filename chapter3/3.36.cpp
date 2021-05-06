#include <iostream>
#include <vector>
#include <iterator>

using std::cout;
using std::endl;
using std::vector;
using std::end;
using std::begin;

int main() {
	char a1[] = { 'a','b','c' };
	char a2[] = { 'a','b','c' };
	auto a1b = begin(a1); auto a1e = end(a1);
	auto a2b = begin(a2); auto a2e = end(a2);
	if ((a1e - a1b) == (a2e - a2b)) {
		int i = 0;
		for (; a1b != a1e; ++a1b,++a2b) {
			if (*a1b == *a2b)
				i++;
		}
		cout << i << endl;
		if (i == sizeof(a1))
			cout << "equal" << endl;
		else {
			cout << "no1" << endl;
		}
	}
	else {
		cout << "no2" << endl;
	}
}