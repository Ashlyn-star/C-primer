#include <iostream>
#include <string>
#include <fstream>
#include "../chapter7/7.26.h"

int main(int argc, char** argv)
{
    std::ifstream file1(argv[1]);
    std::ofstream ofile(argv[2], std::ofstream::app);//׷�ӵ�ĩβ


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
                print(ofile, total);
                ofile << std::endl;
                total = trans;
            }
        }
        print(ofile, total);
        ofile << std::endl;

        return 0;
    }
    else
    {
        std::cerr << "No data?!" << std::endl;
        return -1;
    }
}
