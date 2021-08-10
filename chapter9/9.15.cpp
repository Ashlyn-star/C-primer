#include <vector>
#include <iostream>

using namespace std;

int main()
{
	vector<int> v1 = { 1,2,3 };
	vector<int> v2 = { 1,3 };
	if(v1 == v2)
		cout << "=" << endl;
	else
		cout << "!=" << endl;

	return 0;
}
