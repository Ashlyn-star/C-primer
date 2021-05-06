//引用过程试验
#include <iostream>
int main() {
	int a = 42;
	const int& r = a * 2;
	std::cout << r << std::endl;
}