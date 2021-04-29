#include <iostream>
#include "Sales_item.h"

int main() {
	Sales_item A,SUM;
	while (std::cin >> A)
		SUM = SUM + A;
	std::cout << SUM << std::endl;
}