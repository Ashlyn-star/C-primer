//ָ��ѧϰ�����е�����
#include <iostream>
int main() {
	int a = 42;
	int* p = &a;
	int* p1 = p;//p1����ָ��p���ǽ�pָ��ָ������ݸ�ֵ��p1ָ��
	int** p2 = &p;//p2ָ��p

	std::cout << *p << std::endl;//�������a��ֵ42
	std::cout << p << std::endl;//���pָ������ݣ���a�ĵ�ַ
	std::cout << *p1 << std::endl;//���p1ָ��ָ�����ĵ����ݣ���a��ֵ42
	std::cout << p1 << std::endl;//���a�ĵ�ַ  ���⣺p1����洢����a�ĵ�ַ����pָ��ĵ�ַô��
	                             //�൱���ǽ�pָ��ָ������ݸ�ֵ��p1ָ�룬����p1����ָ��ָ���ָ��
	std::cout << &a << std::endl;//a�ĵ�ַ
	std::cout << p2 << std::endl;//���p2�����ݼ�p�ĵ�ַ
	std::cout << *p2 << std::endl;//p2���p�ĵ�ַ��*p2��p,ֱ������p�������a�ĵ�ַ��ͬ�� **p2����a��ֵ42
	std::cout << &p << std::endl;//���p�ĵ�ַ	
}
