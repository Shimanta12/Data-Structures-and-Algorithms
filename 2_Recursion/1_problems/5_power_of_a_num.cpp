#include <iostream>
using namespace std;

int power(int a, int n)
{
    if (n == 0)
        return 1;
    return a * power(a, n - 1);
}

int optm_power(int a, int n)
{
    if (n == 0)
    {
        return 1;
    }
    int sub_problem = optm_power(a, n / 2);
    if (n % 2)
    {
        return a * sub_problem * sub_problem;
    }
    else
        return sub_problem * sub_problem;
}

int main()
{
    int a, n;
    cin >> a >> n;
    cout << power(a, n) << endl;
    cout << optm_power(a, n) << endl;
    return 0;
}