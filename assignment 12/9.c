// 9. Write a recursive function to print octal of a given decimal number
#include<stdio.h>
void octal(int n);
void octal(int n)
{
    if(n<8)
    printf("%d",n);
    else
    {octal(n/8);
    printf("%d",n%8);
    }
}
int main()
{
    int n;
    printf("enter a number ");
    scanf("%d",&n);
    octal(n);
}