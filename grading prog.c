/*Grading system for
maths
chem
bio*/
#include<stdio.h>
int main()
{
    int maths,bio,chem,avg;
    printf("enter the marks for maths,chem and bio\n");
    scanf("%d %d %d",&maths,&bio,&chem);
    avg=(maths+bio+chem)/3;
    printf("avarege is %d\n",avg);
    if(avg>70 && avg<90)
    {
        printf("Grade A");
    }
    else if(avg>50 && avg<70)
    {
        printf("Grade B");
    }
    else if(avg>40 && avg<50)
    {
        printf("Grade C");
    }
    return 0;
}