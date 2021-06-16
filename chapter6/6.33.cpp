#include<iostream>
#include <vector>
#include<string>

using std::cout;
using std::cin;
using std::endl;
using std::begin;
using std::end;
using std::string;
using std::vector;

/*
void print( vector<string>i, decltype(i.begin()) beg ) {
    if (beg != i.end()) {
		cout << *beg << endl;
		++beg;
		print( vector<string> i, decltype(i.begin()) beg );
	}
	else
	{
		cout << endl;
	}
}*/

void print(std::vector<string>::const_iterator iterator_begin, std::vector<string>::const_iterator iterator_end) {
	if (iterator_begin != iterator_end) {
		cout << *iterator_begin << endl;
		++iterator_begin;
		print(std::vector<string>::const_iterator iterator_begin,std::vector<string>::const_iterator iterator_end);
	}
	else
	{
		cout << endl;
	}
}

int main() {
	vector<string> s = { "aaa","bbb","ccc","ddd" };
	print (s.begin(),s.end());
	return 0;
}