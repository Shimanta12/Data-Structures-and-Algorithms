#include <iostream>
#include <vector>
using namespace std;

vector<string> nums = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

void number_spell(int n)
{
    if (n == 0)
    {
        return;
    }
    number_spell(n / 10);
    cout << nums[n % 10] << " ";
}

int main()
{
    int n;
    cin >> n;
    number_spell(n);
    return 0;
}