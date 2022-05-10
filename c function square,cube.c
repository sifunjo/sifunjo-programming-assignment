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
 



