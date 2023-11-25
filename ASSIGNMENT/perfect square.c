//
// Created by USER on 11/25/2023.
//
#include <stdio.h>
#include<math.h>
int main(){
    int a;
    printf("enter your number:");
    scanf("%d",&a);
    float c= sqrt(a);
    if(c*c==a){
        printf("perfect square!!");
    }
    else if(a!=c*c){
        printf("not a perfect square!!");
    }
