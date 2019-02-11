
int main()
{
char a[25];
	int b,i,j,t;
gets(a);
for(i=0;a[i]!='\0';i++);
b=i;
for(i=0;i<b;i++)
{
 for(j=i+1;j<b;j++)
 {
 if(a[j]<a[i])
  {
   t=a[j];
   a[j]=a[i];
   a[i]=t;
  }
 }
}
for(i=0;i<b;i++)
 printf("%c",a[i]);
}
