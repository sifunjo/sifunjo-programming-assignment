#include<stdio.h>

int main()
{
int i;
int num[8]={21,32,32,34,56,67,89,90};
//normal order
  for(i=21;i<=90;i++)
 {
 printf("%d\t",i);
}
printf("\n");
//reverse order
for(i=90;i>21;i--)
{
printf("%d\t",i);
}
    return 0;
}






    