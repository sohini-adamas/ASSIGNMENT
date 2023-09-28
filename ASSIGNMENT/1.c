#include <stdio.h>

int main() {
    int a,pro=1,c;
    a=1;
    printf("Enter Your Number\n");
    scanf("%d",&c);
    while(a<=c){
        pro=pro*a;
        a++;
    }
    printf("Factorial of %d is %d : ",c,pro);
}
