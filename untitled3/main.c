#include <stdio.h>

int main() {
    int a,c,pro=1;
    printf("Enter your number : \n");
    scanf("%d",&c);
    a=1;
    while (a<=c){
        pro = pro*a;
        a++;
    }
    printf("factorial is %d",pro);
    return 0;
}
