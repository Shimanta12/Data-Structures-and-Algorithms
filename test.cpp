#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> invalid_vec{1};
    vector<int> valid_vec{1234};
    cout << valid_vec.at(0) << "\n"; // outputs 1234
    for (int i = 0; i < 10; i++)
    {
        invalid_vec.at(i) = i; // throws std::out_of_range
    }
    cout << valid_vec.at(0) << "\n";
}