#include <iostream>
#include <vector>
#include <queue>
using namespace std;

class Compare
{
public:
    bool operator()(int a, int b)
    {
        return a > b;
    }
};

int main()
{
    vector<int> arr = {34, 12, 3, 45, 6, 7, 89};

    priority_queue<int> max_heap;
    // priority_queue<int, vector<int>, greater<int>> min_heap; // Using builtin compare function.
    priority_queue<int, vector<int>, Compare> min_heap; // Using custom compare function.

    for (int num : arr)
    {
        max_heap.push(num);
    }
    for (int num : arr)
    {
        min_heap.push(num);
    }

    while (!max_heap.empty())
    {
        cout << max_heap.top() << " ";
        max_heap.pop();
    }
    cout << endl;
    while (!min_heap.empty())
    {
        cout << min_heap.top() << " ";
        min_heap.pop();
    }
    return 0;
}