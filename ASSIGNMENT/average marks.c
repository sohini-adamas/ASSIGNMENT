//
// Created by USER on 10/16/2023.
//
//Write a program in c to input 5 subject from class 12 and calculate the average of the grades,
#include<stdio.h>
int main()
{
    int m,s,sst,b,e,avg;
    printf("Enter Maths , Social Science, Science, Bengali, English Marks:\n");
    scanf("%d %d %d %d %d",&m,&sst,&s,&b,&e);
    avg=(m+s+sst+b+e)/5;
    printf("Average of all the marks is:%d\n",avg);
}
