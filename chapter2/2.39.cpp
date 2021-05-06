#include <iostream>
struct Foo {/*此处为空*/ }
int main() {
	return 0;
}


//.\2.39.cpp(3) : error C2628 : “Foo”后面接“int”是非法的(是否忘记了“; ” ? )
//.\2.39.cpp(3) : error C3874 : “main”的返回类型应为“int”而非“Foo”
//.\2.39.cpp(4) : error C2440 : “return”: 无法从“int”转换为“Foo”
//.\2.39.cpp(4) : note: 无构造函数可以接受源类型，或构造函数重载决策不明确