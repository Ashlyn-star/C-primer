#include <iostream>
#include <fstream>
#include "Sales_item.h"

int main() {
	Sales_item A;
	std::ofstream examplefile("D:\\study\\c++ primer\\test\\test\\example1.txt");//\\��ʾ����·��
	if (examplefile.is_open)


	while (std::cin >> A) {
		examplefile << A;
	}

}