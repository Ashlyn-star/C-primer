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
		cout << *it << endl;//����ʵ�֣�������it��ָ����
	}
	//cout <<it<< endl;û�н���it���͵�<<�����
	//
	//cout << s.begin() << endl;

}