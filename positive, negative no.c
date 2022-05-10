/*write a c program to check if a give number is positive or negative*/
#include<stdio.h>
int main ()
{
    int num;
    printf("input the number");
    scanf("%d",&num);
    if(num>=0)
        printf("%d is positive number\n",num);
    else if(num<0)
        printf("%d is negative number\n",num);
        return 0;
}



















