#include <iostream>
using namespace std;

int main()
{
    char sentence[100], paragraph[1000];
    cin.getline(sentence, 100);
    cin.getline(paragraph, 1000, '#'); // taking multiple lines as input. For that reason we have to the pass the optional parameter which will be treated as a terminating character. By default it's newline character.
    return 0;
}