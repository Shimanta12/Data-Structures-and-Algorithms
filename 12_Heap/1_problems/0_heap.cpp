#include <iostream>
#include "heap.h"
using namespace std;

int main()
{
    Heap h = Heap();
    h.push(50);
    h.push(60);
    h.push(70);
    h.push(90);
    h.push(80);
    h.push(100);

    cout << h.front() << endl;

    h.pop();
    cout << h.front() << endl;
    h.print();

    h.push(20);
    cout << h.front() << endl;
    h.print();

    h.push(50);
    cout << h.front() << endl;
    h.print();
    return 0;
}