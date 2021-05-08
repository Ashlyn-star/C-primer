//switch中变量定义的作用范围探勘
#include <iostream>
//#include <vector>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;
//using std::vector;

int main() {
	int ch = 1;
	switch (ch)
	{
	    case 1:
			string a;
			int jval;
			//break;
	    default:
			cout <<a.empty()<< endl;
			jval = 0;
			cout << jval << endl;
			break;
	}
}