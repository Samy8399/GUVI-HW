int main()
{
	char a[100];
	int i,b;
	gets(a);
	for(b=0;a[b]!='\0';b++);
	for(i=0;i<b;i++)
	{
		if(i%2!=0)
		printf("%c",a[i]);
	}
	printf("\t");
   for(i=0;i<b;i++)
	{
		if(i%2==0)
		printf("%c",a[i]);
	}
}
