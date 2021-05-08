#include <iostream>
#include <stdexcept>

using std::cout;
using std::cin;
using std::endl;
using std::runtime_error;


int main() {
	int a, b;
	cin >> a >> b;
	if (b == 0)
	{
		throw runtime_error("the error of the second num is zero");
	}
	cout << a / b << endl;
}

