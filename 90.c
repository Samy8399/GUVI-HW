int main()
{
	int i,j,c=0;
	char a[100];
	gets(a);
	for(j=0;a[j]!='\0';j++);
	for(i=0;i<j;i++)
	{
		if((a[i]>=48)&&(a[i]<=57))
		c=1;
	}
	if(c==1)
	printf("yes");
	else
	printf("no");
}
