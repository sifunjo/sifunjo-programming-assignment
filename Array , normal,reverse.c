//arrey to print normal and reversed no
#include<stdio.h>

int main()
{
int i;
int num[7]={1,2,3,4,5,6,7};
//normal order
  for(i=1;i<=7;i++)
 {
 printf("%d\t",i);
}
printf("\n");
//reverse order
for(i=7;i>=1;i--)
{
printf("%d\t",i);
}
    return 0;
}
