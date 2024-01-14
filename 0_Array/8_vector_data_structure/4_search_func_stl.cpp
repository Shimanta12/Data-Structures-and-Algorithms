#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    vector<int> arr = {10, 20, 30, 40, 50, 60, 70};

    // searching a subsequence using search()
    vector<int> sub = {30, 40, 50};
    vector<int>::iterator it2;
    it2 = search(arr.begin(), arr.end(), sub.begin(), sub.end());
    if (it2 != arr.end())
    {
        cout << "Subsequence found at " << it2 - arr.begin() << "th index" << endl;
    }
    else
    {
        cout << "NOT Found!" << endl;
    }
    return 0;
}