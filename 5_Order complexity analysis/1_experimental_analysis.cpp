#include <iostream>
#include <algorithm>
#include <ctime>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        arr[i] = n - i;
    }

    auto start = clock();
    sort(arr.begin(), arr.end());
    auto end = clock();

    cout << end - start << endl;
    return 0;
}