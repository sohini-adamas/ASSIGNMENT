//
// Created by USER on 11/4/2023.
//
#include<stdio.h>
#include<stdlib.h>
int fun(int n){
    if(n==0){
        exit(0);
    }
    else {
        printf("%d ",n);

        return fun(n - 1);
    }
}
int main(){
    int n;
    printf("enter n:");
    scanf("%d",&n);
    fun(n);
}