/*a program to display natural numbers from 50 to 1 in reverse */
#include<stdio.h>
int main()
{
int i;
{for(i=50;i>=1;i--)
printf("%d\n",i);
}
return 0;
}
/*a program to find sum of first 10numbers*/
#include<stdio.h>

int main()
{
int i,sum=0;
printf("the first 10 natura numbers is \n");
   for(i=1;i<=10;i++) 
{ 
sum=sum+i;
printf("%d",i);
}
printf("\n the sum of %d\n",sum);
    return 0;
}

/*a program to display cube of numbers*/
#include<stdio.h>
void main()
{
int i,cb;
printf("enter number of terms");
scanf("%d",&cb);
for(i=1;i<=cb;i++)
{
printf("number is %d and cube of %d is %d\n",i,i,(i*i*i));
}
}








    