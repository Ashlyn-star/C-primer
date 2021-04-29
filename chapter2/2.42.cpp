#include <iostream>
#include <string>
#include "Sales_data.h"

int main() {
	//1.5.1
	//1.21
	Sales_data item1, item2;
	std::cin >> item1.IBSM >> item1.salesnum >> item1.price;
	std::cin >> item2.IBSM >> item2.salesnum >> item2.price;
	std::cout << item1.IBSM + item2.IBSM
		<< item1.salesnum + item2.salesnum
		<< item1.price + item2.price
		<< std::endl;
	return 0;
}