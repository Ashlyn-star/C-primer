#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

int main() {
	char ch;
	int aCnt = 0, eCnt = 0, iCnt = 0, oCnt = 0, uCnt = 0;
	while (cin >> ch) {
		switch (ch)
		{
		case 'a':case 'A':
			++aCnt;
			break;
		case 'e':case 'E':
			++eCnt;
			break;
		case 'i':case 'I':
			++iCnt;
			break;
		case 'o':case 'O':
			++oCnt;
			break;
		case 'u':case 'U':
			++uCnt;
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

}