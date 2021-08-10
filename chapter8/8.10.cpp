#include<fstream>
#include<iostream>
#include<vector>
#include<string>
#include<sstream>

using std::vector;
using std::string;

int main() {
	std::ifstream infile("aaaa");
	vector<string> strv;
	string s;
	if (infile) {
		while (infile >> s) {
			strv.push_back(s);
		}
	}
	
	for (auto& i : strv) {
		std::istringstream iss(i);
		while (iss >> buf)
			std::cout << buf << std::endl;
	}
}