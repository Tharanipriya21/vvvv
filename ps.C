#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char a[10];
clrscr();
printf("enter the string");
gets(a);
strrev(a);
printf("reverse of a string is %s",a);
getch();
}
