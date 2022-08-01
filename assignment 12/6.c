// 6. Write a recursive function to print first N even natural numbers in reverse order
#include<stdio.h>
void even(int n);
void even(int n){
    if(n==1)
    {
        printf("2 ");
    }
    else
    {  
        printf("%d ",2*n);
        even(n-1); 
    }
    }

 int main()
 {  int N;
    printf(" enter the value of N ");
    scanf("%d",&N);
    even(N);

    return 0;
 }