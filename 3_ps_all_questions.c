//What will be the output of this program.
// #include<stdio.h>
// int main()
// {
//     int a = 10;
//     if(a=11){
//         printf("I am 11");    
//     }
//     else{
//         printf("I am not 11");
//     }
// }
// Answer is ("I am 11")because use a only one equaltwo and this is not relational operators.

/* Writea program to find out whether a student is pass or fail;if it requires total 40% and
atleast 33% in each subject  to pass. Assume 3 subjects and take marks as an input from the 
user*/
// #include<stdio.h>
// int main()
// {
//     int physics, chemistry, maths;
//     float total;

//     printf("Enter a Physics number\n");
//     scanf("%d",&physics);

//     printf("Enter a Chemistry number\n");
//     scanf("%d",&chemistry);

//     printf("Enter a Maths number\n");
//     scanf("%d",&maths);
    
//     total =(physics + chemistry + maths)/3;

//     if((total<40) || physics<33 || chemistry<33 || maths<33){
//         printf("Your total percentage is %f and you are fail\n",total);
//     }

//     else{
//         printf("Your total percentage is %f and you are pass\n", total);
//     }
// }    

// Calculate income tax paid by an employers to the government as per the slabs mentioned below:
/* Income slab          Tax
    2.5L-5.0L            5%
    5.0L-10.0L           20%
    Above 10.0L          30% 
 Note that there is no tax below 2.5L. Take income amount as an input from the user*/\

// #include<stdio.h>
// int main()
// {
//     float tax= 0,income;
//     printf("Enter your income\n");
//     scanf("%f",&income);

//     if(income>=250000 && income<=500000){
//         tax = tax + 0.05 *(income - 250000);
//     }

//     if(income>=500000 && income<=1000000){
//         tax = tax + 0.20 *(income - 500000);
//     }

//     if(income>=1000000){
//         tax = tax + 0.30 *(income - 1000000);
//     }

//     printf ("Your net income tax to be paid by 26th of this month is %f\n",tax);

// }

// Write a program to determine whether a character entered  by the user the lowercase or not.
// #include <stdio.h>
// int main()
// {
//     char ch;
//     printf("Enter a character\n");
//     scanf("%c",&ch);

//     if(ch>=97 && 122>=ch){
//         printf("It is lowercase");
//     }
//     else{
//         printf("It is not lowercase");
//     }
// }

