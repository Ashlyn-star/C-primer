#include <iostream>

int main()
{
    int i = 0, & r = i;
    auto a = r;   // a ����

    const int ci = i, & cr = ci;//ciΪ������crΪ���ó���
    auto b = ci; // b ����
    auto c = cr; // c ����
    auto d = &i; // d ����ָ��
    auto e = &ci; // e ����ָ��

    const auto f = ci; //������
    auto& g = ci; //g�̶����ã�ԭʽ�ӵ��� const int & g=ci;

    a = 42; b = 42; c = 42; *d = 42; e = &c;

    return 0;
}
