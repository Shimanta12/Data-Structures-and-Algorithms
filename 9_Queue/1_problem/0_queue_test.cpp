#include <iostream>
// #include "queueCA.h"
#include "queuell.h"
using namespace std;

int main()
{
    int n = 5;
    // Queue<int> q(n); // for circular array representation of queue.
    Queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    q.push(6);
    q.pop();
    q.pop();
    q.push(7);
    while (!q.empty())
    {
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl;
    return 0;
}