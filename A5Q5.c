// Write a program to print the first N odd natural numbers in reverse order.

#include<stdio.h>

int main()
{
    int num, res;
    printf("Enter a number at which you want to print only odd numbers: ");
    scanf("%d",&num);
    res=(2*num)-1;
    printf("First %d odd natural numbers are -\n",num);
    for(int i=0; i<num; i++)
    {
        printf("%d\n",res);
        res=res-2;
    }
    return 0;
}