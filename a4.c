#include<stdio.h>
int main(){
    int a= 1800;
    printf(a%400==0?"leap year":a%100==0?"not a leap year":a%4==0?"leap year":"not a leap year");
}