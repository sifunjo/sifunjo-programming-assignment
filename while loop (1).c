#include<stdio.h>

int main()
{
    int n=15;
    while(n>0)
    {
        printf("%d\n",n);
        n=n-=1;
    }
    printf("end on loop");
    return 0;
}