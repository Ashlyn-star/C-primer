#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

int main() {
	char ch;
	int aCnt = 0, eCnt = 0, iCnt = 0, oCnt = 0, uCnt = 0, emCnt = 0;
	while (cin >> std::noskipws >> ch) { //noskipws => no skip whitespace(�հ�)noskipws ���ǲ���������ǰ�Ŀո�, ���� ������ ����ط��Ŀո�,������noskipws���������������ȡ�հ׷�����������������
		switch (ch)
		{
		case 'a':
		case 'A':
			++aCnt;
			break;
		case 'e':
		case 'E':
			++eCnt;
			break;
		case 'i':
		case 'I':
			++iCnt;
			break;
		case 'o':
		case 'O':
			++oCnt;
			break;
		case 'u':
		case 'U':
			++uCnt;
			break;
		case '\v':
		case '\t':
		case '\n':
			++emCnt;
			break;
		default:
			break;
		}
	}
	cout << "aA" << aCnt << endl;
	cout << "eE" << eCnt << endl;
	cout << "iI" << iCnt << endl;
	cout << "oO" << oCnt << endl;
	cout << "uU" << uCnt << endl;		
	cout << "  " << emCnt << endl;

}