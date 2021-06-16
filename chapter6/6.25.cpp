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
/*


int main(string a,string b ){
	string c = a + b;
	cout << c << endl;
	return 0;
}
*/


int main(int argc, char const* argv[])
{
	const string s1 = argv[1], s2 = argv[2];

	cout << s1 + s2 << endl;

	return 0;
}
