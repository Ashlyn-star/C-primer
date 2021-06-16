#include<iostream>

using std::cout;
using std::cin;
using std::endl;

size_t count_call() {
	static size_t i = 0;
	return ++i;
}

int main() {
	int n;
	while (cin >> n) {
		cout << count_call() << endl;
	}
}