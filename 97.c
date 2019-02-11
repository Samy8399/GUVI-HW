#include<stdio.h>
void main()
{
int a,rem,t=0;
clrscr();
printf("Enter a Number");
scanf("%d",&a);
while(a)
{
 rem=a%10;
 t=t*10+rem;
 a=a/10;
}
printf("%d",t);
getch();
}
