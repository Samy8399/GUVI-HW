int main()
{
	char a[10];
	int b,c,i,j;
	gets(a);
	a[0]=a[0]-32;
	for(i=0;a[i]!='\0';i++);
	b=i;
	for(i=0;i<b;i++)
	{
		if(a[i]==' ')
		{
			a[i+1]=a[i+1]-32;
		}
	}
	for(i=0;i<b;i++)
	printf("%c",a[i]);
}
