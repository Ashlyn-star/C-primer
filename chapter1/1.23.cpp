#include <iostream>
#include "Sales_item.h"

int main() {
	Sales_item A,SUM��A1;
	int num;
	if (std::cin >> A1) {
		num = 1;
		SUM = A1;
		while (std::cin >> A) {
			if (SUM.isbn() == A.isbn()) {
				SUM += A;
				num++;
			}
			else {
				std::cout << num << "�����Ϊ" << A.isbn() << "����ϢΪ" << std::endl;
				SUM = A;
				num = 1;

			}
		}
	
	}
	else {
		std::cerr << "error in input" << std::endl;
	}
	
}