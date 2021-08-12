#include<iostream>
#include<forward_list>
#include<string>

using namespace std;

void insert_string(forward_list<string>& fl, string& s1, string& s2) {
	auto iter = fl.begin();
	auto ib = fl.before_begin();
	while (iter != fl.end()) {
		if ((*iter) == s1) {
			ib = iter;
			break;
		}
		else {
			ib = iter;
			iter++;
		}
	}
	fl.insert_after(ib, s2);
}

int main() {
	forward_list<string>fl = { "aaa","bbb","ccc","ddd","fff" };
	string s1 = "ddd";
	string s2 = "eee";
	insert_string(fl, s1, s2);
	for (auto i : fl) {
		cout << i << endl;
	}
}