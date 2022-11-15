// Write a program to print the first N natural numbers.

#include<stdio.h>

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    for(int i=0; i<num; i++)
    {
        printf("%d\n",i+1);
    }
    return 0;
}