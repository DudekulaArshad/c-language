#include<stdio.h>
#include<conio.h>
int main()
{
int a;
char b[100];
char c[50];
scanf(" %[^\n]",&b);
scanf("%s",&c);
scanf("%d",&a);
printf("********** Your Details ********** \n");
printf("Your Name is : %s \n",b);
printf("Your D.O.B is : %s \n",c);
printf("Your Age is : %d \n",a);
}
// we can use %[^\n] to take string input with .
