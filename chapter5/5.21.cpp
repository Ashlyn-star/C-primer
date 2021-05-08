#include <iostream>
#include <string>
#include <vector>

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;

int main() {
	string s, before;
	int flag = 0;
	while (cin >> s) {
		if (!before.empty()&& isupper(before[0])) {
			if (before == s) {
				flag = 0;
				cout << s << endl;
				break;//出现相同就跳出循环
			}
			else
				flag = 1;
		}
		before = s;
	}
	if (flag)//由于break出来的结果中不会运行该语句
		cout << "no same string" << endl;
}