//
// Created by USER on 10/8/2023.
//
#include <stdio.h>
int main()
{
    int n,i,c=0;
    printf("enter number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++) {
        if (n % i == 0) {
            c = c + 1;
        }
    }
        if(c==2) {
            printf("Its prime");
        }
        else {
            printf("its composite");
        }

}