#include <iostream>
#include <string>
#include <vector>

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;

int main() {
	string s,before;
	int flag = 0;
	while (cin >> s) {
		if (!before.empty()) {
			if (before == s) {
				flag = 0;
				cout << s << endl;
				break;//������ͬ������ѭ��
			}
			else
				flag = 1;
		}	
		before = s;
	}
	if(flag)//����break�����Ľ���в������и����
		cout << "no same string" << endl;
}