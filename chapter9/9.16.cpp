#include <vector>
#include <iostream>

using namespace std;

int main()
{
	list<int> v1 = { 1,2,3 };
	vector<int> v2 = { 1,3 };
	if ((vector<int>(v1.begin(),v1.end())) == v2)
		cout << "=" << endl;
	else
		cout << "!=" << endl;

	return 0;
}
