#include <iostream>
int main() {
	int a = 42 , b = 1;
	int* p = &a;
	std::cout << "a=" << a << "ָ��a��p  *p=" << *p << std::endl;
	*p = 33;//����ָ����ָ������ֵ
	p = &b;//����ָ��ָ��Ķ���
	std::cout << "a=" << a << "ָ��b��p  *p=" << *p << std::endl;
}