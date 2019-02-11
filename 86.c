int main()
{
	char a[100];
	int b,i,j,c=0;
	gets(a);
	for(b=0;a[b]!='\0';b++);
	for(i=0;i<b;i++)
	{
		for(j=i+1;j<b;j++)
		{
			if(a[i]==a[j])
			{
				c=1;
				break;
			}
		}
	}
	if(c==1)
	printf("no");
	else
	printf("yes");
}
