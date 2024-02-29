#include <iostream>
#include "stackV.h"
using namespace std;

int main()
{
    Stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);

    cout << st.top() << endl;
    st.pop();
    cout << st.top() << endl;
    st.print_stack();
    return 0;
}