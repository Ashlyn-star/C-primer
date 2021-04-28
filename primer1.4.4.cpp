#include <iostream>

int main()
{
    int currVal = 0, val = 0;
    if (std::cin >> currVal) {
        int cnt = 1;
        while (std::cin >>val) {
            if (val == currVal)
                ++cnt;
            else {
                std::cout << currVal << "occurs" << cnt << "time" << std::endl;
                currVal = val;
                cnt = 1;//重置计数器
            }
        }//while
        std::cout << currVal << "occurs" << cnt << "time" << std::endl;

    }
    return 0;
}//实现前提：输入内容为查验连续值出现多少次
