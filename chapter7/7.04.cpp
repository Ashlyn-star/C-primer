#include<iostream>
#include<string>

using std::string;

class Person 
{
private:
	string Name;
	string Adress;

pubilc:
//这两个函数应该为const,因为这两个函数只需要读取，不需要改变；
	string name() const{
		return name;
	}
	string adress() const{
		return adress;
	}
};