
/*a program to find sum of first 10numbers*/
#include<stdio.h>

int main()
{
    int i,sum=0;
    printf("the first 10 natura numbers is \n");
    for(i=1; i<=10; i++)
    {
        sum=sum+i;
        printf("%d",i);
    }
    printf("\n the sum of %d\n",sum);
    return 0;
}
