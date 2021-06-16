#include<iostream>
#include<string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

void Captical(string s) {
	int flag = 0;
	for (auto c : s) {
		if (isupper(c))
			flag = 1;
	}
	if (flag) {
		cout << "º¬ÓÐ´óÐ´×ÖÄ¸" << endl;
	}
	else
		cout << "²»º¬ÓÐ´óÐ´×ÖÄ¸" << endl;

}

void lowercap(string& s) {
	for (auto& r : s) {
		r = tolower(r);
	}
}

int main() {
	string str = "nvoeNFOWAINFnkj";
	Captical(str);
	lowercap(str);
	Captical(str);
	cout << str << endl;

}