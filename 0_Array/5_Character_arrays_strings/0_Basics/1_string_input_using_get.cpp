#include <iostream>
using namespace std;

int main()
{
    char sentence[100];
    char temp = cin.get();
    int i = 0;
    while (temp != '\n') // We can also take multiple lines as get() also considers newline characters. In that way we have stop at something else rather than '\n'
    {
        sentence[i++] = temp;
        temp = cin.get();
    }
    sentence[i] = '\0';
    cout << sentence;
    return 0;
}