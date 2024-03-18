#include <iostream>
#include <vector>
using namespace std;

class Heap
{
    vector<int> v;
    bool heap_type;

public:
    Heap(int default_size = 10, bool heap_type = true)
    {
        v.reserve(default_size + 1);
        v.push_back(-1);
        this->heap_type = heap_type;
    }

    bool compare(int a, int b)
    {
        if (heap_type)
        {
            return a < b;
        }
        else
        {
            return a > b;
        }
    }
    int front()
    {
        if (!is_empty())
        {
            return v[1];
        }
    }

    void push(int data)
    {
        v.push_back(data);
        int idx = v.size() - 1;
        int parent = idx / 2;

        while (idx > 1 and compare(v[idx], v[parent]))
        {
            swap(v[idx], v[parent]);
            idx = parent;
            parent = parent / 2;
        }
    }

    void heapify(int root)
    {
        int left = root * 2;
        int right = root * 2 + 1;

        int min_idx = root;

        if (left < v.size() and compare(v[left], v[min_idx]))
        {
            min_idx = left;
        }
        if (right < v.size() and compare(v[right], v[min_idx]))
        {
            min_idx = right;
        }

        if (min_idx != root)
        {
            swap(v[min_idx], v[root]);
            heapify(min_idx);
        }
    }

    void pop()
    {
        swap(v[1], v[v.size() - 1]);
        v.pop_back();
        heapify(1);
    }

    bool is_empty()
    {
        return v.size() == 1;
    }

    void print()
    {
        for (int i = 1; i < v.size(); i++)
        {
            cout << v[i] << " ";
        }
        cout << endl;
    }
};