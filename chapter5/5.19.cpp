#include <iostream>
#include <string>
#include <vector>

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;

int main() {
	string a, b;
	decltype(a.size()) n;
	do {
		cout << "input two string :" << endl;
		cin >> a >> b;
		if (a.size() < b.size())
			cout << a << endl;
		else {
			if (a.size() == b.size())
				cout << a<<"  "<<b << endl;
			else
				cout << b << endl;
		}
	} 	while (1);
}