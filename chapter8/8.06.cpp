#include <iostream>
#include <string>
#include <fstream>
#include "../chapter7/7.26.h"

int main(int argc, char** argv)
{
	std::ifstream file1(argv[1]);

    if (!file1) return 1;

    Sales_data total(file1);

    if (!total.isbn().empty())
    {
        Sales_data trans;

        while (read(file1, trans))
        {
            if (total.isbn() == trans.isbn())
            {
                total.combine(trans);
            }
            else
            {
                print(std::cout, total);
                std::cout << std::endl;
                total = trans;
            }
        }
        print(std::cout, total);
        std::cout << std::endl;

        return 0;
    }
    else
    {
        std::cerr << "No data?!" << std::endl;
        return -1;  
    }
}
