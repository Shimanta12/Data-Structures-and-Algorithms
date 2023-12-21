#include <iostream>
using namespace std;

int main()
{
    char sentence[100];
    cin.getline(sentence, 100);
    int letters = 0, digits = 0, spaces = 0, i = 0;

    while (sentence[i] != '\0')
    {
        if ((sentence[i] >= 'a' and sentence[i] <= 'z') or (sentence[i] >= 'A' and sentence[i] <= 'Z'))
            letters++;
        else if (sentence[i] >= '0' && sentence[i] <= '9')
            digits++;
        else if (sentence[i] == ' ' or sentence[i] == '\t')
            spaces++;
        i++;
    }
    cout << "Letters: " << letters << " Digits: " << digits << " Spaces: " << spaces;
    return 0;
}