#include <iostream>
#include <string>
using std::string;
using std::cin;
using std::cout;
using std::endl;
int main() {
	string s;
	getline(cin, s);
	for (char& c : s)
		c = 'x';
	cout << s << endl;
	return 0;
}