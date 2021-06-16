#include<iostream>
#include <cstddef>
#include <iterator>
#include<string>

using std::cout;
using std::cin;
using std::endl;
using std::begin;
using std::end;
using std::string;

/*void print(const int ia[10])
{
	for (size_t i = 0; i != 10; ++i)
		cout << ia[i] << endl;
}

int main() {
	int ib[10] = { 10,9,8,7,6,5,4,3,2,1 };
	print(ib);
}*/
/*
const string& shorterstring(const string& s1, const string& s2) {
	return s1.size() < s2.size() ? s1 : s2;
}
int main() {
	string a = "helloworld"; string b = "hello";
	cout << shorterstring(a, b) << endl;
	string c = shorterstring(a, b);
	cout << c << endl;

}*/

const string& mamip() {
	string ret;
	if (!ret.empty())
		return ret;
	else
		return "empty";
}
int main() {
	string i ;
	cout << mamip<< endl;
}