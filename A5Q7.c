// Write a program to print the first N even natural numbers in reverse order


#include<stdio.h>

int main()
{
    int num, res;
    printf("Enter a number at which you want to print only even numbers: ");
    scanf("%d",&num);
    res=2*num;
    printf("First %d even natural numbers are -\n",num);
    for(int i=0; i<num; i++)
    {
        printf("%d\n",res);
        res=res-2;
    }
    return 0;
}