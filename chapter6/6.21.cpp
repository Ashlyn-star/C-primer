#include<iostream>

using std::cout;
using std::cin;
using std::endl;

int compare(int a, int* b) {
	int re;
	a < *b ? re = *b : re = a;
	return re;
}

int main() {
	int i = 15,m=20;
	int* p = &m;
	cout << compare(i, p) << endl;


}