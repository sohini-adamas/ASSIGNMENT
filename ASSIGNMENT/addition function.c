//
// Created by USER on 10/9/2023.
//
#include<stdio.h>
int operation(int a, int b){
    int add= a+b;
    int sub= a-b;
    int multiplication= a*b;
    int divide= a/b;
    printf("%d+%d=%d\n",a,b,add);
    printf("%d-%d=%d\n",a,b,sub);
    printf("%d x %d=%d\n",a,b,multiplication);
    printf("%d/%d=%d\n",a,b,divide);
}
int main(){
    int a=0, b=0;
    printf("Enter A & B:\n");
    scanf("%d %d",&a,&b);

    operation (a,b);
}