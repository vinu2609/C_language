// Continues Statements:----

#include <stdio.h>
int main()
{
    int a=5, i=0;
    while(i<10){
        if(i!=a){
            continue;
        }
        else{
            printf("%d",i);
        }
    }
}