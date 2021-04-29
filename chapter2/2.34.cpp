#include <iostream>

int main()
{
    int i = 0, & r = i;
    auto a = r;   // a 整型

    const int ci = i, & cr = ci;//ci为常量，cr为引用常量
    auto b = ci; // b 整形
    auto c = cr; // c 整型
    auto d = &i; // d 整型指针
    auto e = &ci; // e 整型指针

    const auto f = ci; //常整型
    auto& g = ci; //g固定引用，原式子等于 const int & g=ci;

    a = 42; b = 42; c = 42; *d = 42; e = &c;

    return 0;
}
