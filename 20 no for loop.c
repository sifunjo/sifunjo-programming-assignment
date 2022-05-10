#include<stdio.h>

int main()
{
int counter,N;
    printf("enter a positive numbern");
    scanf("%d",&N);
    printf("printing numbers from %d to 1\n",N);
    for(counter=N;counter>0; counter--)
    printf("%d\n", counter);
    return 0;
}