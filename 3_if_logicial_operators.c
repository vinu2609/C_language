#include<stdio.h>
int main(){
    int age;

    printf("Enter your age\n");
    scanf("%d",&age);

    if(age<=80 && age>=18){
        printf("You are above 18 and below 80, You can drive\n");
    }

    else{
        printf("You can drive\n");
    }
}