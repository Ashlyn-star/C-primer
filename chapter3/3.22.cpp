#include <iostream>
#include <vector>
#include <string>
using std::vector;
using std::string;
using std::cin;
using std::cout;
using std::endl;

int main() {
	string te;
    vector<string> text;
	while (cin >> te) {
		text.push_back (te);
	}
	//应先查询有无输入
   // vector<string> text{ "abcd,efg","","AAaa" };
    for (auto it = text.begin(); it != text.end() && !it->empty(); ++it)
    {
        for (auto& c : *it)
            c = toupper(c);
    }

    for (auto it = text.begin(); it != text.end(); ++it)
    {
        cout << *it << endl;
    }

    return 0;
   
}
	
