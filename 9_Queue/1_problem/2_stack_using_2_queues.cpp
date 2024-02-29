#include <iostream>
#include <queue>
using namespace std;

class Stack
{
    queue<int> q1, q2;

public:
    void push(int data)
    {
        if (!q1.empty())
        {
            q1.push(data);
        }
        else
        {
            q2.push(data);
        }
    }

    void pop()
    {
        if (q1.empty())
        {
            while (!q2.empty())
            {
                int front = q2.front();
                q2.pop();
                if (q2.empty())
                {
                    break;
                }
                q1.push(front);
            }
        }
        else
        {
            while (!q1.empty())
            {
                int front = q1.front();
                q1.pop();
                if (q1.empty())
                {
                    break;
                }
                q2.push(front);
            }
        }
    }

    int top()
    {
        if (q1.empty())
        {
            while (!q2.empty())
            {
                int front = q2.front();
                q2.pop();
                q1.push(front);
                if (q2.empty())
                {
                    return front;
                }
            }
        }
        else
        {
            while (!q1.empty())
            {
                int front = q1.front();
                q1.pop();
                q2.push(front);
                if (q1.empty())
                {
                    return front;
                }
            }
        }
    }
    bool empty()
    {
        return q1.empty() and q2.empty();
    }
};

int main()
{
    Stack st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);

    while (!st.empty())
    {
        cout << st.top() << " ";
        st.pop();
    }
    return 0;
}