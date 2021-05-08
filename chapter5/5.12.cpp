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
		//这种使用多次switch来对比，思路：switch中不可以string，就将其case匹配过程放入switch输入中
		//这种比较适合于个数较少的情况，老实说不如用if
		//可见if更加实用于条件情况
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

		//想法2：分层匹配，适用于长度短的情况
		//问题：switch可以嵌套么？有什么需要注意的情况？
		//输入的string ch 
		//先switch ch[0],case'f',成功的case里面再嵌套一个switch来比较第二位，老实说这种适用于串中存在少量不同的
		//比如这种情况下前一个都是f，可以比上面的想法少一个switch

		//总结：用if吧。

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