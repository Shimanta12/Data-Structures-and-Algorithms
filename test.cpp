#include <iostream>
using namespace std;

void func(int arr[][5])
{
    cout << sizeof(arr) << endl;
}

int main()
{
    int arr[2][5] = {0};
    func(arr);
    return 0;
}