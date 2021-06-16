#include<iostream>
#include <cstddef>
#include <iterator>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::begin;
using std::end;
using std::string;



bool str_subrange(const string& str1, const string& str2) {
	if (str1.size() == str2.size())
		return str1 == str2;
	auto size = (str1.size() < str2.size()) ? str1.size() : str2.size();
	for (decltype (size)i = 0; i != size; ++i) {
		return;
	}
}

int main() {
	string a="hello", b="hello";
	str_subrange(a, b);
}