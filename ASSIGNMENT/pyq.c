//
// Created by USER on 11/5/2023.
//
#include <stdio.h>
int recr(int n);
int main(){
    int n;
    n=recr(5);
    printf("%d",n);
}
int recr(int n){
    return n*(n-1);
}