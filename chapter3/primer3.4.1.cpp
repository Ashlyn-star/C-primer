#include <iostream>
#include <vector>
#include <string>
using std::vector;
using std::string;
using std::cin;
using std::cout;
using std::endl;

int main() {
	string s;
	vector<string> ss;
	while (cin >> s) {
		ss.push_back(s);
	}
	if (ss.begin() != ss.end()) {
		auto it = ss.begin();
		cout << *it << endl;//可以实现，返回其it所指对象
	}
	//cout <<it<< endl;没有接受it类型的<<运算符
	//
	//cout << s.begin() << endl;

}