#include <iostream>
#include <iomanip>
using namespace std;

// Pass by reference using reference variable
void apply_tax(float &amount)
{
    float tax = 0.10;
    float total_tax = amount * tax;
    cout << fixed << setprecision(2) << total_tax << endl;
    amount -= total_tax;
}

// Pass by reference using pointer variable
void apply_tax_2(int *amount)
{
    float tax = 0.10;
    *amount = *amount - (*amount) * tax;
}

int main()
{
    float income;
    cin >> income;

    apply_tax(income);
    // apply_tax_2(&income);

    cout << fixed << setprecision(2) << income << endl;
    return 0;
}