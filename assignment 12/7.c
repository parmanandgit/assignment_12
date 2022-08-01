// 7. Write a recursive function to print squares of first N natural numbers
#include<stdio.h>
void natural_square(int n);
void natural_square(int n){
    if(n==1)
    {
        printf("1 ");
    }
    else
    {
        natural_square(n-1);
        printf("%d ",n*n);
    }
}
 int main()
 {  int N;
    printf(" enter the value of N ");
    scanf("%d",&N);
    natural_square(N);

    return 0;
 }