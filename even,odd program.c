
/*write a program to determine if a number is even or odd*/
#include<stdio.h>
void main ()
{
    int num1,rem1;
    printf("input an integer");
    scanf("%d",&num1);
    rem1=num1%2;
    if(rem1==0)
        printf("%d is an even integer\n",num1);
    else
        printf("%d is odd integer\n",num1);
}


















