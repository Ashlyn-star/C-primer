#include<iostream>
#include<forward_list>

using namespace std;

int main() {
	forward_list<int> fl = { 1,2,3,4,5,6,7,8,9 };
	auto iter = fl.begin();
	auto ib = fl.before_begin();
	while (iter != fl.end()) {
		if (*iter % 2) {
			iter = fl.erase_after(ib);
		}
		else {
			ib = iter;
			iter++;
		}
	}
	for (auto i : fl) {
		cout << i << endl;
	}
}