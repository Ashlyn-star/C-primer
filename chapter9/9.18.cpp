#include <string>
#include <deque>
#include <iostream>

using namespace std;

int main() {
	string a;
	deque<string> deq;
	while (cin >> a) {
		deq.push_back(a);
	}

	for (auto iter = deq.cbegin(); iter != deq.cend(); ++iter)
		cout << *iter << " ";
	cout << endl;

}