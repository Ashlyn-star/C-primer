#include <iostream>
#include <vector>
#include <iterator>

using std::cout;
using std::endl;
using std::vector;
using std::begin;
using std::end;

int main()
{
    int a[] = { 1,2,3 };
    vector<int> v(begin(a), end(a));

    for (auto e : v)
        cout << e << " ";
    cout << endl;

    return 0;
}