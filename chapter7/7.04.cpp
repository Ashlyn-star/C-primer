#include<iostream>
#include<string>

using std::string;

class Person 
{
private:
	string Name;
	string Adress;

pubilc:
//����������Ӧ��Ϊconst,��Ϊ����������ֻ��Ҫ��ȡ������Ҫ�ı䣻
	string name() const{
		return name;
	}
	string adress() const{
		return adress;
	}
};