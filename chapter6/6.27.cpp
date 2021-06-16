#include <iostream>
#include<initializer_list>
using std::cout;
using std::cin;
using std::endl;
using std::initializer_list;

int sum(initializer_list<int> i) {
	int sum = 0;
	for (auto beg = i.begin(); beg != i.end(); ++beg) {
		sum += *beg;
	}
	return sum;

}

int main() {
	initializer_list<int> i1{ 1,2,3,4,5,6 };
	cout << sum(i1) << endl;

}