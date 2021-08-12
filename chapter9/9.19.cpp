#include <string>
#include <list>
#include <iostream>

using namespace std;

int main() {
	string a;
	list<string> lis
	while (cin >> a) {
		lis.push_back(a);
	}

	for (auto iter = lis.cbegin(); iter != lis.cend(); ++iter)
		cout << *iter << " ";
	cout << endl;

}