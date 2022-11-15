// Write a program to print cubes of the first N natural numbers

#include<stdio.h>

int main()
{
    int num;
    printf("Enter a natural number at which you want to print its cube: ");
    scanf("%d",&num);
    printf("Cubes of first %d natural numbers :-\n",num);
    for(int i=1; i<=num; i++)
    {
        printf("%d\n",(i*i*i));
    }
    return 0;
}