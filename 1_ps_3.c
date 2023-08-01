
// WAP to calculate simple interest for a set of values representing principal, no of years and rate of interest.
#include <stdio.h>

int main()
{
    int principal= 100, rate = 4,year = 2;
    int simpleInterest = (principal*rate*year)/100;
    
    printf("The value of simple interest is %d",simpleInterest);
    return 0;
}


