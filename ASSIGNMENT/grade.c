//
// Created by USER on 10/15/2023.
//
#include <stdio.h>
int main(){
    float a,b,c;
    printf("Enter the values of A,B and C:\n");
    scanf("%f%f%f",&a,&b,&c);

    printf("(a+b)=%f\n",(a*a)+(2*a*b)+(b*b));
    printf("(a-b)=%f\n",(a*a)-(2*a*b)+(b*b));
    printf("(a^2-b^2)=%f\n",(a+b)*(a-b));
    printf("(a+b+c)^2=%f\n",(a*a)+(b*b)+(c*c)+(2*a*b)+(2*b*c)+(2*c*a));
    printf("(a+b-c)^2=%f\n",(a*a)+(b*b)+(c*c)+(2*a*b)-(2*b*c)-(2*c*a));
    printf("(a-b+c)=%f\n",(a*a)+(b*b)+(c*c)-(2*a*b)-(2*b*c)+(2*c*a));
    printf("(b+c-a)^2=%f\n",(a*a)+(b*b)+(c*c)-(2*a*b)+(2*b*c)-(2*c*a));
    printf("(a-b-c)^2=%f\n",(a*a)+(b*b)+(c*c)-(2*a*b)+(2*b*c)-(2*c*a));
    printf("(a+b)^3=%f\n",(a*a*a)+(b*b*b)+((3*a*b)+(a+b)));
    printf("(a-b)^3=%f\n",(a*a*a)-(b*b*b)-((3*a*b)+(a-b)));
    printf("(a^3+b^3)=%f\n",(a+b)*((a*a)-(a*b)+(b*b)));
    printf("(a^3-b^3)=%f\n",(a-b)*((a*a)+(a*b)+(b*b)));
    printf("(a^3+b^3+c^3)=%f\n",(a*a*a)+(b*b*b)+(c*c*c)-(3*a*b*c));

}