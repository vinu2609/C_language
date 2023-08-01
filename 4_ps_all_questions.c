// WAP to print multiplication table of a given number n.

// #include <stdio.h>
// int main()
// {
//     int i=1,n;
//     printf("Enter the number :");
//     scanf("%d", &n);

//     for(i=1; i<=10; i++){
//         printf("%d * %d = %d\n", n, i,(n*i));
//     }
    
// }

// WAP to get a number from user and print its factorials.

// #include <stdio.h>
// int main()
// {
//     int n, f =1;
//     printf("Enter a number :");
//     scanf("%d",&n);

//     for(n; n>1; n--){
//         f = n*f;
//     }
//     printf("%d",f);
// }

// WAP to print sum of first 10 natural numbers by while loop.

// #include <stdio.h>
// int main()
// {
//     int i, sum = 0;

//     while(i<=10){
    
//         sum = sum + i;
//         i++;
//     }
//     printf("%d",sum);
// }

// WAP to print sum of first 10 natural numbers.

// #include <stdio.h>
// int main()
// {
//     int i, sum = 0;

//     for(i=1; i<=10; i++){
//         sum = sum + i;
//     }
//     printf("%d",sum);
// }


// WAP to print multiplication table of 10 in reverse order.

// #include <stdio.h>
// int main(){
//     int i;
//     for(i=10; i ; i--){
//         printf("10 * %d = %d\n", i,10*i);
//     }
// }

// WAP to print multiplication table in reverse order by user.

// #include <stdio.h>
// int main(){
    
//     int i, n;
//     printf("Enter a number :");
//     scanf("%d", &n);

//     for(i=10; i ; i--){
//         printf("%d * %d = %d\n",n, i,(n*i));
//     }
// }

// WAP to check and print by user the number is prime or not.
// # include <stdio.h>
// int main()
// {
//     int i,n,f=0;

//     printf("Enter a Number :");
//     scanf("%d", &n);

//     for(i=2; i<n; i++)
//     {
//         if(n%i==0)
//         {
//             f=1;
//             break;
//         }
//     }
//     if(f=1){
//         printf("Non Prime");
//     }
//     else{
//         printf("Prime");
//     }

// }