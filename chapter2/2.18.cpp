#include <iostream>
int main() {
	int a = 42 , b = 1;
	int* p = &a;
	std::cout << "a=" << a << "指向a的p  *p=" << *p << std::endl;
	*p = 33;//更改指针所指向对象的值
	p = &b;//更改指针指向的对象
	std::cout << "a=" << a << "指向b的p  *p=" << *p << std::endl;
}