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
    vector<int> v{ 1,2,3 };
    int a[3], i = 0;
    
    
    for (auto& e : v) {
        a[i] = e;  
        cout << a[i] << " ";i++;
    }
    cout << endl;

    return 0;
}