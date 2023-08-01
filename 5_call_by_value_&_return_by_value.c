// Call by value and return by value.

#include <stdio.h>
int add (int a,int b);

void main(){
    int a,b,c;                                //Local Variable
     printf("Enter the first value :");
    scanf("%d", &a);

    printf("Enter the second value :");
    scanf("%d", &b);

    c = add(a,b);
    printf("Sum = %d",c);

}
int add (int a, int b){
    int c;
    c = a + b;
    return c;
    
}