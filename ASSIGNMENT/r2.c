//
// Created by USER on 11/6/2023.
//
#include <stdio.h>
#include <ctype.h>
int main()
{
    char c;
    printf("enter char:");
    scanf("%c",&c);
    if(isalpha( c)){
        printf("alphabet");
    }
    else if(isdigit(c)){
        printf("digit");
    }
}