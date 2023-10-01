//
// Created by USER on 9
#include <stdio.h>
int main() {
    int n;
    printf("enter number of lines you want to print :\n");
    scanf("%d",&n);
    for(int i=1;i<=n;i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d", j);
        }
        printf("\n");
    }
}
