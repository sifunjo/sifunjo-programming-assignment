#include<stdio.h>
int main()
{
float input,square,cube;
    printf("enter a number");
    scanf("%f",& input);
  cube=input*input*input;
    square=input*input;
    printf("\n the square of %f is %f",input, square);
    printf("\n the cube of %3f is %3f",input,cube);
     return 0;
}