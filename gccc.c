#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,t,gcd;
clrscr();
scanf("%d %d",&a,&b);
while(b!=0)
{
t=b;
b=a%b;
a=t;
}
gcd=a;
printf("%d",gcd);
getch();
}
