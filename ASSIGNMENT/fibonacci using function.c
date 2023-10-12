//
// Created by USER on 10/12/2023.
//
#include <stdio.h>
int fib(int n){
    int temp1=1,temp2=1,backup=0;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=temp1;j++){
            printf("*");
        }
        printf("\n");
        backup=temp2;
        temp2=temp1+temp2;
        temp1=backup;
    }
}
int main()
{
    int n;
    printf("Enter number\n");
    scanf("%d",&n);
    fib(n);
}