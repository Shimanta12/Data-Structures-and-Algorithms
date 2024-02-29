#include <iostream>
#include <stack>
using namespace std;

void insert_at_bottom(stack<int> &st, int data)
{
    if (st.empty())
    {
        st.push(data);
        return;
    }
    int temp = st.top();
    st.pop();
    insert_at_bottom(st, data);
    st.push(temp);
}

void reverse(stack<int> &st)
{
    if (st.empty())
    {
        return;
    }
    int temp = st.top();
    st.pop();
    reverse(st);
    insert_at_bottom(st, temp);
}

int main()
{
    stack<int> st;
    st.push(4);
    st.push(3);
    st.push(2);
    st.push(1);

    // insert_at_bottom(st, 5);
    reverse(st);

    while (!st.empty())
    {
        cout << st.top() << " ";
        st.pop();
    }
    cout << endl;
    return 0;
}