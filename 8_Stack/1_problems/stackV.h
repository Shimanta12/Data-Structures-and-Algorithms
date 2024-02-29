#include <iostream>
#include <vector>
using namespace std;

template <typename T>
class Stack
{
    vector<T> arr;

public:
    void push(T data)
    {
        arr.push_back(data);
    }
    void pop()
    {
        if (!empty())
        {
            arr.pop_back();
        }
    }
    T top()
    {
        if (!empty())
        {
            return arr.back();
        }
    }
    bool empty()
    {
        arr.size() == 0;
    }
    void print_stack()
    {
        int size = arr.size();
        for (int i = size - 1; i >= 0; i--)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};