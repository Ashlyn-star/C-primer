#include <iostream>
#include<string>
#include <vector>

using namespace std;

int main() {
	vector<char>a = { 'a','b','c','d','e' };
	string s(a.begin(), a.end());
	cout << s << endl;
}