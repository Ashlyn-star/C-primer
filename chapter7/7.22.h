#ifndef PERSON_H_
#define PERSON_H_


#include<string>

using std::string;

std::istream& read(std::istream& is, Person& item);

class Person
{
private:
	string Name;
	string Adress;

pubilc:
	//���캯��
	Person() : Name(""), Adress("") {}
	Person(std::istream& is) { read(is, *this); }
	//����������Ӧ��Ϊconst,��Ϊ����������ֻ��Ҫ��ȡ������Ҫ�ı䣻
	string name() const {
		return name;
	}
	string adress() const {
		return adress;
	}
};
//���ཫ�����������Ϊ���ؽ����
std::istream& read(std::istream& is, Person& item)
{
	return is >> item.name >> item.address;
}

std::ostream& print(std::ostream& os, const Person& item)
{
	return os << item.name << " " << item.address;
}
