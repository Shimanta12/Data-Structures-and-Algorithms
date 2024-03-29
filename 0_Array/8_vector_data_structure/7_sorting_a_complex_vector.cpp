#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int calc_total_marks(vector<int> marks)
{
    return marks[0] + marks[1] + marks[2];
}

bool compare(pair<string, vector<int>> s1, pair<string, vector<int>> s2)
{
    vector<int> m1 = s1.second;
    vector<int> m2 = s2.second;

    return calc_total_marks(m1) < calc_total_marks(m2);
}

int main()
{
    vector<pair<string, vector<int>>> student_marks = {
        {"Shimanto", {23, 34, 54}},
        {"Safwan", {45, 65, 76}},
        {"Banna", {67, 87, 56}}};
    sort(student_marks.begin(), student_marks.end(), compare);
    for (auto student : student_marks)
    {
        cout << student.first << endl;
    }
    return 0;
}