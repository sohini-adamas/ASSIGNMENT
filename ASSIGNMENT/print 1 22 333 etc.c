//
// Created by USER on 10/1/2023.
//
#include<stdio.h>
int main()
{
    int n;
    printf("No. of lines you want to print:\n ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int c=1;c<=i;c++){
            printf("%d",i);
        }
        printf("\n");
    }
}
