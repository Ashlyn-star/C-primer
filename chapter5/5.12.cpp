#include <iostream>
#include <string>
#include <vector>

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;

int main() {
	string ch;
	vector<string> str{ "ff","fl" ,"fi"};
	int fCnt = 0, lCnt = 0, iCnt = 0;
	while (cin >> ch) {
		//����ʹ�ö��switch���Աȣ�˼·��switch�в�����string���ͽ���caseƥ����̷���switch������
		//���ֱȽ��ʺ��ڸ������ٵ��������ʵ˵������if
		//�ɼ�if����ʵ�����������
		switch (ch==str[0])
		{
		case 1:
			++fCnt;
			break;
		default:
			break;
		}

		switch (ch == str[1])
		{
		case 1:
			++lCnt;
			break;
		default:
			break;
		}

		switch (ch == str[2])
		{
		case 1:
			++iCnt;
			break;
		default:
			break;
		}

		//�뷨2���ֲ�ƥ�䣬�����ڳ��ȶ̵����
		//���⣺switch����Ƕ��ô����ʲô��Ҫע��������
		//�����string ch 
		//��switch ch[0],case'f',�ɹ���case������Ƕ��һ��switch���Ƚϵڶ�λ����ʵ˵���������ڴ��д���������ͬ��
		//�������������ǰһ������f�����Ա�������뷨��һ��switch

		//�ܽ᣺��if�ɡ�

		/*switch (ch[0])
		{
		case 'f':
			switch (ch [1])
			{
			case f:
				++fCnt;
				break;
			case l:
				++lCnt;
				break;
			case i:
				++iCnt;
				break;
			default:
				break;
			}
			break;
		default:
			break;
		}
	}
	cout << "ff" << fCnt << endl;
	cout << "fl" << lCnt << endl;
	cout << "fi" << iCnt << endl;
	

}