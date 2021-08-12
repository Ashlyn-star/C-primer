#include<iostream>
#include<list>
#include<deque>

using namespace std;

int main() {
	list<int> a{ 1,2,3,4 };
	deque<int> de1;
	deque<int> de2;

	for (auto i = a.begin(); i != a.end(); i++) {
		if ((*i) % 2) {
			de1.push_back(*i);
		}
		else
			de2.push_back(*i);
	}

	for (auto m : de1)
		cout << m << endl;
	for (auto n : de2)
		cout << n << endl;
}