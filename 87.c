#include<stdio.h>
void main()
{
int a,b,c,i;
clrscr();
scanf("%d%d",&a,&b);
if(a<b)
{c=a;
}
else
{
c=b;
}
//printf("%d\t%d",a,b);
for(i=c;i>0;i--)
{
if((a%i==0)&&(b%i==0))
{
printf("\n%d",i);
break;
}
}
getch();
}
