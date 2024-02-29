#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main()
{
    stack<string> books;
    books.push("Java");
    books.push("OS");
    books.push("DBMS");
    books.push("Python");

    while (!books.empty())
    {
        cout << books.top() << " ";
        books.pop();
    }
    cout << endl;
    return 0;
}