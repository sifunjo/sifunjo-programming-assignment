/*a program to calculate discount for purchase above 5000*/
#include<stdio.h>
int main()
{
    int item,price;
    float total,discount;
    printf(" enter the item\n");
    scanf("%d",&item);
    printf("enter the price\n");
    scanf("%d",& price);
    total=item*price;
    discount=(total)*0.1;
    if(total>=5001)
        printf("discount is %f\n",discount);
    else if(total=5000)
        printf("no discount");
    return 0;
}

 



