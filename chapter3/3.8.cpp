#include <iostream>
#include <string>
using std::string;
using std::cin;
using std::cout;
using std::endl;
int main() {
	string s;
	getline(cin, s);
	if (!s.empty()) {
		
		/*decltype(s.size()) n = 0;
		while (n < s.size()) {
			s[n] = 'x';
			n++;
		}*/
		//´«Í³for
		for(decltype(s.size()) n = 0; n < s.size(); n++)
			s[n] = 'x';
		cout << s << endl;
	}
	else
	{
		cout << "no data" << endl;
	}
	
	return 0;
}