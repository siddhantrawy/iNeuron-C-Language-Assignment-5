// Write a program to print the first N natural numbers in reverse order

#include<stdio.h>

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    for(int i=num; i>0; i--)
    {
        printf("%d\n",i);
    }
    return 0;
}