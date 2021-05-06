//指针学习过程中的试验
#include <iostream>
int main() {
	int a = 42;
	int* p = &a;
	int* p1 = p;//p1不是指向p，是将p指针指向的内容赋值给p1指针
	int** p2 = &p;//p2指向p

	std::cout << *p << std::endl;//输出的是a的值42
	std::cout << p << std::endl;//输出p指针的内容：即a的地址
	std::cout << *p1 << std::endl;//输出p1指针指向对象的的内容：即a的值42
	std::cout << p1 << std::endl;//输出a的地址  问题：p1里面存储的是a的地址不是p指针的地址么？
	                             //相当于是将p指针指向的内容赋值给p1指针，所以p1不是指向指针的指针
	std::cout << &a << std::endl;//a的地址
	std::cout << p2 << std::endl;//输出p2的内容即p的地址
	std::cout << *p2 << std::endl;//p2存放p的地址，*p2即p,直接输入p输出的是a的地址，同理 **p2则是a的值42
	std::cout << &p << std::endl;//输出p的地址	
}
