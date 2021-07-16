#include<iostream>
#include<string>
#include"7.11.h"

using std::string;
using std::endl;
using std::cout;
using std::cin;

int main() {
	Sales_data total(cin);
	Sales_data trans;
	while (read(cin, trans)) {
		if (total.isbn() == trans.isbn())
			total = add(total, trans);
		else {
			print(cout, total) << endl;
			total = trans;
		}
	}
	print(cout, total) << endl;

	return 0;
}