#include<iostream>
#include "7.06.h"

#include<string>
using std::string;
using std::cin;
using std::cout;
using std::endl;

int main() {
	Sales_data total;

	if (read(cin, total)) {
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
	}
	else {
		cerr << "no data?" << endl;
	}

}