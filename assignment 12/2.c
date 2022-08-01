// 2. Write a recursive function to print first N natural numbers in reverse order
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
        printf("%d ",n);
        natural(n-1);
    }
}
 int main()
 {  int N;
    printf(" enter the value of N ");
    scanf("%d",&N);
    natural(N);

    return 0;
 }