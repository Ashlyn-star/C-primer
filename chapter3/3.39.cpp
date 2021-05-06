#include <iostream>
#include <string>
#include <cstring>

using std::cout;
using std::endl;
using std::string;

int mian() {
	string s1 = "hello";
	string s2 = "hello" ;
	char a1[] = "hello", a2[] = "hello";
	if (s1 == s2) {
		cout << "1" << endl;
	}
		
	if (strcmp(a1, a2) == 0) {
		cout << "2" << endl;
	}
		
	return 0;
}