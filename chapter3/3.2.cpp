#include <iostream>
#include <string>
using std::string;
using std::cin;
using std::cout;
using std::endl;
int main() {
	string word;
	/*while (cin >> word) {
		cout << word << endl;
	}*/  //一次读入一个词
	while (getline(cin, word)) {//一次读入一整行
		cout << word << endl;
	}
	return 0;
}
