//
// Created by USER on 11/16/2023.
//
#include<stdio.h>
int main(){
    struct stu{
        int feet;
        int inch;
        int time;
    }c1,c2,c3;
    c1.feet=10,c1.inch=6,c1.time=10;
    c2.feet=20,c2.inch=8,c2.time=12;
    c3.feet=c1.feet+c2.feet;
    c3.inch=c1.inch+c2.inch;
    c3.time=c1.time+c2.time;
    if(c3.inch>12){
        c3.feet++;
        c3.inch=c3.inch-12;
    }
    printf("%d feet %d inches %d minutes",c3.feet,c3.inch,c3.time);

}