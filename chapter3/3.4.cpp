#include <iostream>
#include <string>
using std::string;
using std::cin;
using std::cout;
using std::endl;
int main() {
	string s1,s2;
	getline(cin, s1);
	getline(cin, s2);
	if(s1==s2){
		cout << "两个字符串相等：" << s1 << endl;
	}
	if (s1 < s2) {
		cout << "两个字符串不相等，第二个更大" << s2 << endl;
	}
	if (s1 > s2) {
		cout << "两个字符串不相等，第一个更大" << s1<< endl;
	}

	//改写：比较长度，输出长度较大的那个
	if (s1.size() == s2.size()) {
		cout << "两个字符串相等：" << s1 << endl;
	}
	if (s1.size() < s2.size()) {
		cout << "两个字符串不相等，第二个更大" << s2 << endl;
	}
	if (s1.size() > s2.size()) {
		cout << "两个字符串不相等，第一个更大" << s1 << endl;
	}
	return 0;
}
