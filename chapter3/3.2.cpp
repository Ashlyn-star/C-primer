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
	}*/  //һ�ζ���һ����
	while (getline(cin, word)) {//һ�ζ���һ����
		cout << word << endl;
	}
	return 0;
}
