#include <iostream>
using namespace std;

/*
3D matrix -- Images(colored).
Black & white images -- 2D image

colors are represented via RGB

Each pixel has three components (Red, Green, Blue)

So an image can be represented as a matrix[rows][cols][3]

Lets say an image(1K resolution) takes 4MB of storage. How it's calculated?
# of rows  X # of cols X size taken by the each integer of RGB(24)--------[values for RBG can be 0 to 255 and it can be represented with 8 bit]

Then what size would the image be if we increase the rows and colums 4 times. then it would be of 4k resolution of 64MB(16 times more).


What if we have sequence of images which is a video, then it would be a 4D matrix

 */
int main()
{
    return 0;
}