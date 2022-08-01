// 1. Write a recursive function to print first N natural numbers
#include<stdio.h>
void natural(int n);
void natural(int n){
    if(n==1)
    {
        printf("1 ");
    }
    else
    {
        natural(n-1);
        printf("%d ",n);
    }
}
 int main()
 {  int N;
    printf(" enter the value of N ");
    scanf("%d",&N);
    natural(N);

    return 0;
 }