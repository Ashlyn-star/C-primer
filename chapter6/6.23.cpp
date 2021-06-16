#include<iostream>
#include <cstddef>
#include <iterator>

using std::cout;
using std::cin;
using std::endl;
using std::begin;
using std::end;

void print(int& m, int* beg, int* end) {
	cin >> m;
	while (beg != end) {
		cin >> *beg;
	    beg++;
	}
		
}

int main() {
	int i;
	int j[2];
	print(i, begin(j), end(j));
	cout << i << "   " << j[0] << "   " << j[1] << endl;
}