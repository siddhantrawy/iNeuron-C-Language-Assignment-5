// Write a program to print the first N even natural numbers

#include<stdio.h>

int main()
{
    int num, res=0;
    printf("Enter a number at which you want to print only even numbers: ");
    scanf("%d",&num);
    printf("First %d even natural numbers are -\n",num);
    for(int i=0; i<num; i++)
    {
        printf("%d\n",res);
        res=res+2;
    }
    return 0;
}