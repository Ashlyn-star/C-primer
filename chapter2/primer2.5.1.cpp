//指针、常量、别名过程试验
#include <iostream>
int main() {
	typedef char* pstring;
	char* const a = 0;
	const char* p = 0;
	const pstring cstr = 0;
	const pstring* ps;
	const int** p;



	
	int a = 42;
	const int& r = a * 2;
	std::cout << r << std::endl;
}