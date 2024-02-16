/*
Find Deplacement: Given a long route containing N,S,E,W directions, find the shortest path to reach the location.
Print -1 if deplacement is 0;

Sample input: SNNNEWE
Sample output: NNE

Sample input: SSNN
Sample output: -1

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
            y--;
        else if (route[i] == 'N')
            y++;
        else if (route[i] == 'W')
            x--;
        else if (route[i] == 'E')
            x++;
    }
    if (x == 0 and y == 0)
    {
        cout << -1 << endl;
    }
    else
    {

        char path[1000];
        int i = 0;
        if (x > 0)
        {
            while (x--)
            {
                path[i] = 'E';
                i++;
            }
        }
        else
        {
            x = abs(x);
            while (x--)
            {
                path[i] = 'W';
                i++;
            }
        }
        if (y > 0)
        {
            while (y--)
            {
                path[i] = 'N';
                i++;
            }
        }
        else
        {
            y = abs(y);
            while (y--)
            {
                path[i] = 'S';
                i++;
            }
        }
        path[i] = '\0';
        cout << path << endl;
    }
    return 0;
}