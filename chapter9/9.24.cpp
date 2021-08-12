#include<iostream>
#include<vector>


using namespace std;

int main() {
	vector<int>a;
	cout<<a.at(0)<<endl;
	cout << a.[0] << endl;
	cout << a.front() << endl;
	cout << *a.begin() << endl;
}