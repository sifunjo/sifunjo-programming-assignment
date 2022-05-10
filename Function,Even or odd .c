//A function to output temperature in Fahrenheit
#include<stdio.h>
float degrees(float temp);
float fahrenheit(float temp);
int main ()
{
float input,output,output_2;
printf("enter the temp number\n");
scanf("%f",&input);
output=degrees(input);
output_2=fahrenheit(input);
printf("\n temp of %.2f in degrees is%.2f",input,output);
printf("\n temp of %.2f in Fahrenheit is%.2f",input,output_2);
return 0;
}
float degrees(float temp)
{ 
float degrees_temp;
degrees_temp=temp;
return degrees_temp;
}
float fahrenheit(float temp)
{
float fahrenheit_temp;
fahrenheit_temp=temp*9/5+32;
return fahrenheit_temp;
}


//A Function to execute even and odd numbers
#include<stdio.h>
int even(int num);
int odd(int num);
int main()
{
int num;
printf("Enter any number");
scanf("%d",&num);
if(num%2==0)
{
printf("\n the number is even");
}
else
{
printf("\n the number is odd");
}
 return 0;
}
int even (int num)
{
int even_num;
even_num=num%2==0;
return even_num;
}
int odd(int num)
{
int odd_num;
odd_num=num%2!=0;
return odd_num;
}


//Function to find sum of 2 numbers
#include<stdio.h>
int add (int x,y);//function prototype
int main()
{
int a,b,sum;
printf("Eanter the first number:\n");
scanf("%d",&a);
printf("Enter the second number:\n");
scanf("%d",&b);
sum= a+b;// calling function
printf("\n The sum of %d and %d is %d",a,b, add(a,b));
 return 0;
}
int add(int x, y)// function definition
{
int sum;
sum=x+y;
return( sum);
}


//function to find cube of a number
#include<stdio.h>
float cube( float num);//function prototype
float square(float num);
int main()
{
  float input,output,output_2;
  printf("Enter a number:");
  scanf("%f",&input);
  output = cube(input); // calling function
  output_2=square(input);
printf("\n The cube of %.2f is %.2f",input,output);
printf("\n the square of %.2f is %.2f", input,output_2);
return 0;
  }
  float cube (float num)//function definition
  {
  float num_cubed;
  num_cubed= num*num*num;
  return num_cubed;
}
float square(float num)
{
float num_square;
num_square=num*num;
return num_square;
}
 