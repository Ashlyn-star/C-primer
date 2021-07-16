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
	//构造函数
	Person() : Name(""), Adress(""){}
	Person(std::istream& is) { read(is, *this); }
	//这两个函数应该为const,因为这两个函数只需要读取，不需要改变；
	string name() const {
		return name;
	}
	string adress() const {
		return adress;
	}
};
//这类将输入输出流作为返回结果的
std::istream& read(std::istream& is, Person& item)
{
	return is >> item.name >> item.address;
}

std::ostream& print(std::ostream& os, const Person& item)
{
	return os << item.name << " " << item.address;
}
