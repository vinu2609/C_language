// Calculate the area of a circle and modify the same program to calculate the volume of a cylinder given its radius and height.
#include <stdio.h>

int main()
{
    int radius = 3;
    float pi = 3.14;
    
    printf("The area of this cylinder is %f\n",pi*radius*radius);
    int height = 4;
    
    printf("The volume of a cylinder is %f\n", pi*radius*radius*height);

    return 0;
}
