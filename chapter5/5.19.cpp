#include <iostream>
#include <string>
#include <vector>

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;

//5.19  ��дһ�γ���ʹ��do while ѭ���ظ���ִ����������
//������ʾ�û���������string����Ȼ�������϶̵��Ǹ����������
int main() {
	string a, b;
	decltype(a.size()) n;
	do {
		cout << "input two string :" << endl;
		cin >> a >> b;
		if (a.size() < b.size())
			cout << a << endl;
		else {
			if (a.size() == b.size())
				cout << a<<"  "<<b << endl;
			else
				cout << b << endl;
		}
	} 	while (cin);//ʹ��1�Ļ���ֱ�������ļ�������ʱ������ѭ��
	return 0;
}