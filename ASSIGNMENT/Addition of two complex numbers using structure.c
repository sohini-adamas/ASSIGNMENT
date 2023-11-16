//
// Created by USER on 11/16/2023.
//
#include <stdio.h>
int main(){
    struct stu
    {
        int real;
        int imag;
    }c1,c2,c3;
    c1.real=8,c1.imag=6;
    c2.real=5, c2.imag=4;
    c3.real=c1.real+c2.real;
    c3.imag=c1.imag+c2.imag;
    printf("%d+%di",c3.real,c3.imag);
}