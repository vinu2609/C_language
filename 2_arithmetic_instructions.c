#include <stdio.h>
int main()
{
    int a = 6;
    int b = 8;

    printf("The value of a + b is %d\n", a + b);
    printf("The value of a - b is %d\n", a - b);
    printf("The value of a * b is %d\n", a * b);
    printf("The value of a / b is %d\n", a / b);

    int z;
    z = b * a; //Legal
    // b * a = z; // Inlegal
    printf("The value of z is %d\n",b*a);

    printf("5 when divided by 2 leave a remainder of %d\n" ,5%2);

    // No operator is assumed to be present
    // printf("The value of 4*5 is %d\n",(4)(5));  ------> Will not return 20/ Wrong!!
    printf("The value of 4*5 is %d\n",(4)*(5));

    // There is no operator to perform exponentiation in C
    printf("The value of 4^5 is %d\n", 4^5); //Will not produce 4 to the power 5

    printf("The value of 2 to the power 5 is %f\n",pow(2,5));
     
    
    



}