#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

int main() {
	char a;
	int n = 0;
	while (cin >> a) {
		if (a == 'a')
			++n;
		if (a == 'e')
			++n;
		if (a == 'i')
			++n;
		if (a == 'o')
			++n;
		if (a == 'u')
			++n;

	}
	cout << n << endl;
}