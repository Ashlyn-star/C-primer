#include <iostream>

using std::cout;
using std::cin;
using std::endl;

void reset(int& p) {
	
	p = 0;
}

int main() {
	int a = 1, b = 2;
	reset(a);
	cout << a << b << endl;

}