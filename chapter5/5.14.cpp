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
		if (!before.empty()) {  //类型为“std::string”的条件表达式无效			
			if (before == s) {				
				++n;
				if (m < n) {//遇到个数更多的情况
					m = n;
					str = s;					
				}
					
			}				
			else {//两者不等重新
                n = 1;
			}
	
		}
		before = s;
	}
	if (m == 1)
		cout << "没有连续出现的" << endl;
	else
		cout << str << "出现最多次，共计次数：" << m;


}