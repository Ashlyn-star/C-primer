#include<fstream>
#include<iostream>
#include<vector>
#include<string>

using std::vector;
using std::string;

int main() {
	std::ifstream infile("aaaa");
	vector<string> strv;
	string s;
	if (infile) {
		while (getline(infile, s)) {
			strv.push_back(s);
		}
	}

	for (auto& i : strv) {
		std::cout << i << endl;
	}
}