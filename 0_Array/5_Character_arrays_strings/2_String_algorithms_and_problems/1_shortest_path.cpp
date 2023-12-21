/*
Find Deplacement: Given a long route containing N,S,E,W directions, find the shortest path to reach the location.
Sample input: SNNNEWE
Sample output: NNE
            |N
            |
            |
            |
W-------------------------E
            |
            |
            |
            |S
 */

#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char route[1000];
    cin.getline(route, 1000);
    int x = 0, y = 0;
    for (int i = 0; i < strlen(route); i++)
    {
        if (route[i] == 'S')
            x--;
        else if (route[i] == 'N')
            x++;
        else if (route[i] == 'W')
            y--;
        else if (route[i] == 'E')
            y++;
    }
    char path[1000];
    int i = 0;
    if (x > 0)
    {
        while (x--)
        {
            path[i] = 'N';
            i++;
        }
    }
    else
    {
        x = abs(x);
        while (x--)
        {
            path[i] = 'S';
            i++;
        }
    }
    if (y > 0)
    {
        while (y--)
        {
            path[i] = 'E';
            i++;
        }
    }
    else
    {
        y = abs(y);
        while (y--)
        {
            path[i] = 'W';
            i++;
        }
    }
    path[i] = '\0';
    cout << path << endl;
    return 0;
}