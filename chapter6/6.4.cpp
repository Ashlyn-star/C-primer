#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int fact()
{
	int n;
	cout << "input the number:" << endl;
	cin >> n;
	int ret = 1;
	for (int i = 1; i <= n; ++i)
	{
		ret *= i;
	}
	return ret;
}

int main(){
	cout << fact() <<endl;
	return 0;
}