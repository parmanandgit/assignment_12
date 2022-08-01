// 10. Write a recursive function to print reverse of a given number
#include<stdio.h>
void reverse(int n)
     {
        if(n<10)
        printf("%d",n);
        else
        {
            printf("%d",n%10);
            reverse(n/10);
        }
     }
int main()
{
    int n;
    printf("enter a number ");
    scanf("%d",&n);
    reverse(n);
}