int main()
{
	int a[100],b,i,j;
	scanf("%d",&j);
	scanf("%d",&b);
	for(i=0;i<j;i++)
	scanf("%d",&a[i]);
	for(i=0;i<j;i++)
	{
		if(i==b)
		printf("%d",a[b]);
	}
}
