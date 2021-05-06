#include <iostream>
#include <vector>
#include <string>
using std::vector;
using std::string;
using std::cin;
using std::cout;
using std::endl;

int main() {
	string word;
	vector<string> str;
	while (cin >> word) {
		str.push_back(word);
	}
	for (int i = 0; i < str.size(); i++) {
		for (auto& r : str[i]) {
			r = toupper(r);
		}
		cout << str[i] << endl;
	}
	
	return 0;
}