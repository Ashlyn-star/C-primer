#include<iostream>
#include<string>

using std::string;
using std::cout;
using std::cin;
using std::endl;


std::istream& readran(std::istream& is, string& k)//����Ҫ���ã���Ȼk��û�б���ֵ
{
	return is >> k;
}

std::ostream& printran(std::ostream& os, const string& k)
{
	return os <<  " " << k<<endl;
}

int main() {
	string k,a,b;
	readran(cin, k);
	cout << "**********" << endl;
	cout << k << endl;
	printran(cout, k);
	cout << "**********" << endl;
	if (readran(readran(cin, a), b))
		cout << "@@@@@@" << endl;
}