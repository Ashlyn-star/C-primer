#include <iostream>
#include <string>
struct Sales_data {
	std::string IBSM;
	unsigned salesnum = 0;
	double price = 0.00;
};

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

	//1.22
	/*Sales_data sum_item, item;
	std::cin >> sum_item.IBSM >> sum_item.salesnum >> sum_item.price;
	while (std::cin >> item)
	{
		sum_item += item;
	}
	std::cout << sum_item << std::endl;*/


	//1.5.2½Ú
	//1.23
	/*Sales_data currItem, valItem;
	if (std::cin >> currItem) {
		int cnt = 1;
		while (std::cin >> valItem) {
			if (valItem.IBSM == currItem.IBSM)
				++cnt;
			else {
				std::cout << currItem << " occurs " << cnt << " times "	<< std::endl;
				currItem = valItem;
				cnt = 1;
			}
		}
		std::cout << currItem << " occurs " << cnt << " times " << std::endl;
	}*/
	

	//1.6½Ú
	/*Sales_data total;
	if (std::cin >> total) {
		Sales_data trans;
		while (std::cin >> trans) {
			if (total.IBSM == trans.IBSM)
				total += trans;
			else {
				std::cout << total << std::endl;
				total = trans;
			}
		}
		std::cout << total << std::endl;
	}
	else {
		std::cerr << "no data?" << std::endl;
	}*/

	return 0;
}