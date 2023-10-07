//
// Created by USER on 10/8/2023.
//
#include <stdio.h>
#include <math.h>
int main(){
    int num1, num2,hcf=0;
    printf("Enter number1 and number2 : ");
    scanf("%d %d",&num1,&num2);
    for(int i=1;i<=num1 || i<=num2;i++) {
        if (num1 % i == 0 && num2 % i == 0) {
            hcf = i;
        }
    }
        printf("HCF is %d",hcf);
}