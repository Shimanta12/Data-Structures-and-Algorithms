#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define ll long long

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    vector<int> arr(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    ll moves = 0;

    for (int i = 1; i < n; i++)
    {
        while (arr[i] < arr[i - 1])
        {
            arr[i]++;
            moves++;
        }
    }

    cout << moves << endl;

    return 0;
}
