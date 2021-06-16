#include <iostream>
#include <string>
#include <vector>

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;

//5.19  编写一段程序，使用do while 循环重复地执行下述任务：
//首先提示用户输入两个string对象，然后挑出较短的那个并输出它。
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
	} 	while (cin);//使用1的话当直接输入文件结束符时会无线循环
	return 0;
}