#include <iostream>
#include "list.h"
using namespace std;

int main()
{
    List lst;
    lst.push_front(8);
    lst.push_front(7);
    lst.push_front(6);
    lst.push_front(5);
    lst.push_front(4);
    lst.push_front(2);
    lst.push_front(1);

    lst.insert(3, 2);

    lst.pop_front();

    lst.pop_back();

    lst.remove(3);

    lst.print_list();

    cout << lst.at_front() << endl;
    cout << lst.at_back() << endl;

    // cout << lst.search(1) << endl;
    cout << lst.rec_search(5) << endl;
    cout << lst.rec_search(4) << endl;

    lst.reverse();
    lst.print_list();
    return 0;
}