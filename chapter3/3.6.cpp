#include <iostream>
#include <string>
using std::string;
using std::cin;
using std::cout;
using std::endl;
int main() {
	string s;
	getline(cin, s);
	for (auto& c : s)
		c = 'x';
	cout << s << endl;
	return 0;
}