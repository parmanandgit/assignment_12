// 8. Write a recursive function to print binary of a given decimal number
#include<stdio.h>
void binary(int n);
void binary(int n)
{
    if(n<2)
    printf("%d",n);
    else
    {binary(n/2);
    printf("%d",n%2);
    }
}
int main()
{
    int n;
    printf("enter a number ");
    scanf("%d",&n);
    binary(n);
}