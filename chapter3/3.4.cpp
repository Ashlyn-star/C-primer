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
		cout << "�����ַ�����ȣ�" << s1 << endl;
	}
	if (s1 < s2) {
		cout << "�����ַ�������ȣ��ڶ�������" << s2 << endl;
	}
	if (s1 > s2) {
		cout << "�����ַ�������ȣ���һ������" << s1<< endl;
	}

	//��д���Ƚϳ��ȣ�������Ƚϴ���Ǹ�
	if (s1.size() == s2.size()) {
		cout << "�����ַ�����ȣ�" << s1 << endl;
	}
	if (s1.size() < s2.size()) {
		cout << "�����ַ�������ȣ��ڶ�������" << s2 << endl;
	}
	if (s1.size() > s2.size()) {
		cout << "�����ַ�������ȣ���һ������" << s1 << endl;
	}
	return 0;
}
