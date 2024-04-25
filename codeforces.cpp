#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define ll long long
#define F first
#define S second

int d[8][2] = {{0, -1}, {0, 1}, {-1, 0}, {1, 0}, {-1, -1}, {-1, 1}, {1, 1}, {1, -1}};

const int MOD = 1000000007;
const int INF = 2e9;


bool is_sorted(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            return false;
        }
    }
    return true;
}

void solve(int tc)
{
    int n;
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    if (is_sorted(arr, n))
    {
        cout << "YES" << endl;
    }
    else
    {
        bool flag = false;

        while (true)
        {
            bool swapped = false;
            for (int i = 1; i < n - 1; i++)
            {
                if (arr[i - 1] < arr[i] && arr[i] > arr[i + 1])
                {
                    swap(arr[i], arr[i + 1]);
                    swapped = true;
                }
                if (is_sorted(arr, n))
                {
                    flag = true;
                    break;
                }
            }
            if (flag)
            {
                break;
            }
            if (!swapped)
            {
                flag = false;
                break;
            }
        }
        if (flag)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int tc = 1;

    cin >> tc;
    for (int i = 1; i <= tc; i++)
    {
        solve(i);
    }

    return 0;
}