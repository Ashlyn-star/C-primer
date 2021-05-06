#include <iostream>
#include "stddef.h"
using std::cin;
using std::cout;
using std::endl;
int main() {
	constexpr size_t array_size = 10;
	int ia[array_size];
	int* p = ia;
	*p = 0;
	cout << ia[0] << endl;
}