#include <iostream>
#include <string>
#include <vector>

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;

int main() {
	string s,before,str;
	int n = 1,m=0;	
	while (cin >> s) {		
		if (!before.empty()) {  //����Ϊ��std::string�����������ʽ��Ч			
			if (before == s) {				
				++n;
				if (m < n) {//����������������
					m = n;
					str = s;					
				}
					
			}				
			else {//���߲�������
                n = 1;
			}
	
		}
		before = s;
	}
	if (m == 1)
		cout << "û���������ֵ�" << endl;
	else
		cout << str << "�������Σ����ƴ�����" << m;


}