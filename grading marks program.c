/*a program to find Grade of a student*/
#include<stdio.h>
void main() 
{
    int marks,Grade,avg;
    printf("enter the marks\n");
    scanf("%d",& marks);
    if(avg>=70 && avg<=100)
    {
        printf("Grade A");
    }
    else if(avg>=60 && avg<=69)
    {
        printf("Grade B");
    }
    else if(avg>=50 && avg<=59)
    {
        printf("Grade C");
    }
    else if(avg>=40 && avg<=49)
    {
        printf("Grade D");
    }
    else if(avg>=0 && avg<=39)
    {
        printf("Fail");
    }
    
}






