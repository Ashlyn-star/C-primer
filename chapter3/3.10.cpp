#include <iostream>
#include <string>
using std::string;
using std::cin;
using std::cout;
using std::endl;
int main() {
	string s1, s;
	getline(cin,s);
	/*for (decltype(s.size()) index = 0,index1 = 0;; index < s.size(); index++){
		if (ispunct(s[index])) {
			s1[index1] = s[index]; //������򣺶���s1���䳤�Ȳ������߼�©�����������ֻ��ǵÿ���ƴ�ӵķ�ʽ
			++index1;
		}
	}*/
	for (auto c : s) {
		if (��ispunct(s[index]) 
			s1+=c;
		
	}
	cout << s1 << endl;
	return 0;
}