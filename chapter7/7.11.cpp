#include<iostream>
#include<string>
#include"7.11.h"

using std::string;
using std::endl;
using std::cout;
using std::cin;

int main() {
	Sales_data A;
	print(cout, A);
	Sales_data B("23333");
	print(cout, B);
	Sales_data C("23333",5,5.0);
	print(cout, C);
	Sales_data D(cin);
	print(cout, D);

	return 0;

}