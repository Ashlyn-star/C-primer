#include <iostream>
struct Foo {/*�˴�Ϊ��*/ }
int main() {
	return 0;
}


//.\2.39.cpp(3) : error C2628 : ��Foo������ӡ�int���ǷǷ���(�Ƿ������ˡ�; �� ? )
//.\2.39.cpp(3) : error C3874 : ��main���ķ�������ӦΪ��int�����ǡ�Foo��
//.\2.39.cpp(4) : error C2440 : ��return��: �޷��ӡ�int��ת��Ϊ��Foo��
//.\2.39.cpp(4) : note: �޹��캯�����Խ���Դ���ͣ����캯�����ؾ��߲���ȷ