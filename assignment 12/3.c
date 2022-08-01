// 3. Write a recursive function to print first N odd natural numbers
#include<stdio.h>
void odd(int n);
void odd(int n){
    if(n==1)
    {
        printf("1 ");
    }
    else
    {  
        odd(n-1);
        printf("%d ",2*n-1);
       
    }
}

 int main()
 {  int N;
    printf(" enter the value of N ");
    scanf("%d",&N);
    odd(N);

    return 0;
 }