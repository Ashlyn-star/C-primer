#include <iostream>
#include <string>
#include <vector>
#include <list>

using std::list; 
using std::vector; 
using std::cout; 
using std::endl;

int main()
{
    list<int> ilst(5, 1);
    vector<int> ivc(5, 2);

    vector<double> idou(ilst.begin(), ilst.end());
    for (auto i : idou) {

        cout << i << endl;
    }

    vector<double> idou2(ivc.begin(), ivc.end());
    for (auto i : idou2) {

        cout << i << endl;
    }


}