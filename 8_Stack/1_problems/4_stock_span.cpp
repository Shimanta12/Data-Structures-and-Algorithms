#include <iostream>
#include <vector>
#include <stack>
using namespace std;

/*
Problem: Given the number of days and an array consisting of prices of a stock on each day where idx+1 is day number, show spans for prices in each day. [Span denotes the number of days for which the current price is the highest].

Sample input:
7
100 80 60 70 60 75 85

Sample output:
1 1 1 2 1 4 6
 */

void stock_span(vector<int> &prices, vector<int> &spans, int n)
{
    stack<int> s;
    s.push(0);
    spans[0] = 1;
    for (int i = 1; i < n; i++)
    {
        while (!s.empty() and prices[i] >= prices[s.top()])
        {
            s.pop();
        }
        if (s.empty())
        {
            spans[i] = i + 1;
        }
        else
        {
            int prev_highest = s.top();
            spans[i] = i - prev_highest;
        }
        s.push(i);
    }
}

int main()
{
    int n;
    cin >> n;
    vector<int> prices(n);
    for (int i = 0; i < n; i++)
    {
        cin >> prices[i];
    }

    vector<int> spans(n);
    stock_span(prices, spans, n);
    for (int span : spans)
    {
        cout << span << " ";
    }
    cout << endl;
    return 0;
}