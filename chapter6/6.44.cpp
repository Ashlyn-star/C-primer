#include <iostream>
#include <string>

using std::string;

inline bool isShorter(const string& s1, const string& s2)
{
	return s1.size() < s2.size() ? s1 : s2;
}

int main()
{
	string s1("ab"), s2("abc");

	std::cout << isShorter(s1, s2) << std::endl;

	return 0;
}
