//
// Created by USER on 10/16/2023.
//
//Write a program in c to check whether the character entered by the user is a vowel or not.
#include<stdio.h>
int main()
{
    char ch;
    int lc,uc;
    printf("Enter a Character:\n");
    scanf("%c",&ch);
    lc=(ch==97||ch==101||ch==105||ch==111||ch==117);
    uc=(ch==65||ch==69||ch==73||ch==79||ch==85);
    if(lc||uc)
        printf("The character entered is a vowel");
    else
        printf("The character entered is a consonant");
}
