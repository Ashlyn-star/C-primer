#include <iostream>
#include <string>
using std::string;
using std::cin;
using std::cout;
using std::endl;
int main() {
	string s, t;
	getline(cin, s);
	if (!s.empty()) {
		t = s;
		while (getline(cin, s)) {
			t += (' ' + s);
	    }
		cout << t << endl;
	}
	else {
		cout << "no string" << endl;
	}
	return 0;
}