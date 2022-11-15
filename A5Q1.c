// Write a program to print MySirG N times on the screen

#include<stdio.h>

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    for(int i=0; i<n; i++)
    {
        printf("%s\n","MySirG");
    }
    return 0;
}