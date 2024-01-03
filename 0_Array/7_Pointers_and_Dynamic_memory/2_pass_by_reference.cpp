#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

// Pass by reference using reference variable
void apply_tax(int &income)
{
    float tax = 0.10;
    income = ceil(income - income * tax);
}

// Pass by reference using pointer variable
void apply_tax_2(int *income)
{
    float tax = 0.10;
    *income = ceil(*income - (*income) * tax);
}

int main()
{
    int income;
    cin >> income;

    apply_tax(income);
    // apply_tax_2(&income);

    cout << fixed << setprecision(2) << income << endl;
    return 0;
}