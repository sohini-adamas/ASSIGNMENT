//
// Created by USER on 10/15/2023.
//
//Write a program in c to calculate the area of regular hexagon.
#include<stdio.h>
int main()
{
    float a,b,area;
    printf("Enter the values of side:\n");
    scanf("%f",&a);
    b=(3*1.732*a*a)/2;
    printf("Area of hexagon is:%f\n",b);
}