//
// Created by USER on 11/5/2023.
//
#include<stdio.h>
int tr(int n){
    if(n>0){
         printf("%d ",n);
         tr(n-1);
         tr(n-1);
    }
}
int main(){
    tr(7);
}