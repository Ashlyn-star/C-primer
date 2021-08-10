#include<iostream>
#include<vector>

using std::vector;

bool function1(vector<int>::const_iterator begin_, vector<int>::const_iterator end_, int n) {
	while (begin_ != end_) {
		if (*begin_ == n)
			return 1;
		begin_++;
	}
	return 0;
}

int main() {
	vector<int> v1{ 1,2,3,4,5,6,7 };
	int a = 6;
	std::cout << function1(v1.begin(), v1.end(), a)<<std::endl;
	return 0;
}